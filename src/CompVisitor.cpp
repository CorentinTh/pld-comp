#include <string>
#include <map>
#include "CompVisitor.h"
#include "ASSM.h"

using namespace std;

const string WHITESPACE = "  ";
map<string, string> variableAddressMap;
ASSM assm;

bool variableExists(string variableName) {
    return variableAddressMap.find(variableName) != variableAddressMap.end();
}

string getAddress(string variableName) {
    return variableAddressMap.find(variableName)->second;
}

string getNextAddress() {
    return to_string((variableAddressMap.size() + 1) * 4);
}

void putVariableAtAddress(string variableName, string variableAddress) {
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
}

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    string out = ".text\n";
    out.append(".global main\n");
    out.append(visit(ctx->prog()).as<std::string>());
    return out;
}

antlrcpp::Any CompVisitor::visitProg(IFCCParser::ProgContext *ctx) {
    // Prologue
    string out = "main:\n";
    out.append(WHITESPACE + "pushq %rbp\n");
    out.append(WHITESPACE + "movq %rsp, %rbp\n");

    // Instructions
    for (int i = 0; i < ctx->instruction().size(); i++) {
        antlrcpp::Any visited = visit(ctx->instruction(i));
        if (visited.isNotNull()) {
            out.append(WHITESPACE + visited.as<std::string>() + "\n");
        }
    }

    // Epilogue
    out.append(WHITESPACE + "popq %rbp\n");
    out.append(WHITESPACE + "ret\n");

    return out;
}

antlrcpp::Any CompVisitor::visitInstruction(IFCCParser::InstructionContext *ctx) {
    return visit(ctx->expression());
}

antlrcpp::Any CompVisitor::visitExpression(IFCCParser::ExpressionContext *ctx) {
    return visit(ctx->children.at(0));
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    //Check if the variable is already defined
    if (variableExists(variableName)) {
        cout << "Variable " + variableName + " is already defined" << endl;
        return nullptr;
    }
    const string variableAddress = getNextAddress();
    putVariableAtAddress(variableName, variableAddress);

    return nullptr;
}

antlrcpp::Any CompVisitor::visitDeclarationConst(IFCCParser::DeclarationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    //Check if the variable is already defined
    if (variableExists(variableName)) {
        cout << "Variable " + variableName + " is already defined" << endl;
        exit(0);
    }
    const string variableAddress = getNextAddress();
    putVariableAtAddress(variableName, variableAddress);

    return assm.constToAddr(ctx->CONST()->getText(), variableAddress);
}

antlrcpp::Any CompVisitor::visitDeclarationAssign(IFCCParser::DeclarationAssignContext *ctx) {
    const string leftVariableIdentifier = ctx->IDENTIFIER(0)->getText();
    const string rightVariableIdentifier = ctx->IDENTIFIER(1)->getText();
    const string leftVariableAddress = to_string((variableAddressMap.size() + 1) * 4);

    string out = "";

    map<string, string>::iterator mapIterator;
    //Check if left side variable is already assigned, if yes throw an error
    if (variableExists(leftVariableIdentifier)) {
        cout << "Variable " + leftVariableIdentifier + " is already defined" << endl;
        return nullptr;
    }
        //Insert variable into the map
    else {
        putVariableAtAddress(leftVariableIdentifier, leftVariableAddress);
    }

    //Check if right variable exists
    if (variableExists(rightVariableIdentifier)) {
        const string rightVariableAddress = getAddress(rightVariableIdentifier);
        // Move address if the RHS variable to a register
        out.append(assm.addrToRegister(rightVariableAddress, "%eax"));
        // Move value from the register to the left variable
        out.append(assm.registerToAddr("%eax", leftVariableAddress));
        return out;
    } else {
        cout << "Variable " + rightVariableIdentifier + " is not defined" << endl;
        return nullptr;
    }
}

antlrcpp::Any CompVisitor::visitDeclarationMulti(IFCCParser::DeclarationMultiContext *ctx) {
    // Instructions
    for (int i = 0; i < ctx->IDENTIFIER().size(); i++) {
        if (ctx->IDENTIFIER(i) != nullptr) {
            const string variableName = ctx->IDENTIFIER(i)->getText();
            if (variableExists(variableName)) {
                cout << "Variable " + variableName + " is already defined" << endl;
            } else {
                const string variableAddress = getNextAddress();
                putVariableAtAddress(variableName, variableAddress);
            }
        }
    }
    return nullptr;
}

antlrcpp::Any CompVisitor::visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *ctx) {
    const string leftVariableIdentifier = ctx->IDENTIFIER(0)->getText();
    const string rightVariableIdentifier = ctx->IDENTIFIER(1)->getText();

    if (!variableExists(leftVariableIdentifier)) {
        cout << "Variable " + leftVariableIdentifier + " does not exist" << endl;
        return nullptr;
    }
    if (!variableExists(rightVariableIdentifier)) {
        cout << "Variable " + rightVariableIdentifier + " does not exist" << endl;
        return nullptr;
    }
    const string leftVariableAddress = getAddress(leftVariableIdentifier);
    const string rightVariableAddress = getAddress(rightVariableIdentifier);

    string out = assm.addrToRegister(rightVariableAddress, ASSM::REGISTER_A);
    out.append("\n" + WHITESPACE);
    out.append(assm.registerToAddr(ASSM::REGISTER_A, leftVariableAddress));
    return out;
}

antlrcpp::Any CompVisitor::visitAffectationConst(IFCCParser::AffectationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    if (!variableExists(variableName)) {
        cout << "Variable " + variableName + " does not exist" << endl;
        return nullptr;
    }
    const string constValue = ctx->CONST()->getText();
    const string variableAddress = getAddress(variableName);

    return assm.constToAddr(constValue, variableAddress);
}

antlrcpp::Any CompVisitor::visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    if (!variableExists(variableName)) {
        cout << "Variable " + variableName + " does not exist" << endl;
        return nullptr;
    }
    const string variableAddress = getAddress(variableName);

    return assm.addrToRegister(variableAddress, ASSM::REGISTER_RETURN);
}

antlrcpp::Any CompVisitor::visitReturnConst(IFCCParser::ReturnConstContext *ctx) {
    const string constValue = ctx->CONST()->getText();

    return assm.constToRegister(constValue, ASSM::REGISTER_RETURN);
}