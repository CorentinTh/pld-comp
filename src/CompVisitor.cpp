#include <string>
#include <map>
#include "CompVisitor.h"
#include "ASSM.h"

using namespace std;

const string WHITESPACE = "  ";
map<string, string> variableAddressMap;
ASSM assm;

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
        if(visited.isNotNull()) {
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
    const string variableAddress = to_string((variableAddressMap.size() + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));

    return nullptr;
}

antlrcpp::Any CompVisitor::visitDeclarationConst(IFCCParser::DeclarationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = to_string((variableAddressMap.size() + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));

    return assm.constToAddr(ctx->CONST()->getText(), variableAddress);
}

antlrcpp::Any CompVisitor::visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *ctx) {
    const string leftVariableIdentifier = ctx->IDENTIFIER(0)->getText();
    const string rightVariableIdentifier = ctx->IDENTIFIER(1)->getText();

    const string leftVariableAddress = variableAddressMap.find(leftVariableIdentifier)->second;
    const string rightVariableAddress = variableAddressMap.find(rightVariableIdentifier)->second;

    string out = assm.addrToRegister(rightVariableAddress, ASSM::REGISTER_A);
    out.append("\n" + WHITESPACE);
    out.append(assm.registerToAddr(ASSM::REGISTER_A, leftVariableAddress));
    return out;
}

antlrcpp::Any CompVisitor::visitAffectationConst(IFCCParser::AffectationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string constValue = ctx->CONST()->getText();
    const string variableAddress = variableAddressMap.find(variableName)->second;

    return assm.constToAddr(constValue, variableAddress);
}

antlrcpp::Any CompVisitor::visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = variableAddressMap.find(variableName)->second;

    return assm.addrToRegister(variableAddress, ASSM::REGISTER_RETURN);
}

antlrcpp::Any CompVisitor::visitReturnConst(IFCCParser::ReturnConstContext *ctx) {
    const string constValue = ctx->CONST()->getText();

    return assm.constToRegister(constValue, ASSM::REGISTER_RETURN);
}