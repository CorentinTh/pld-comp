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
    return visit(ctx->action());
}

antlrcpp::Any CompVisitor::visitAction(IFCCParser::ActionContext *ctx) {
    return visit(ctx->children.at(0));
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = to_string((variableAddressMap.size() + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));

    return nullptr;
}

antlrcpp::Any CompVisitor::visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = to_string((variableAddressMap.size() + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));

    // TODO: better expression parsing
    const string expression = visit(ctx->expr()).as<string>();
    return assm.constToAddr(expression, variableAddress);
}

antlrcpp::Any CompVisitor::visitAffectation(IFCCParser::AffectationContext *ctx) {
    // TODO: better expression parsing
    const string variable = ctx->IDENTIFIER()->getText();
    const string variableAddress = variableAddressMap.find(variable)->second;
    const string expression = visit(ctx->expr()).as<string>();

    string out;
    const bool isConst = isdigit(expression.at(0)); // TODO: to be changed

    if(isConst) {
        out = assm.constToAddr(expression, variableAddress);
    } else {
        string rightVariableAddress = variableAddressMap.find(expression)->second;
        out = assm.addrToRegister(rightVariableAddress, ASSM::REGISTER_A);
        out.append("\n" + WHITESPACE);
        out.append(assm.registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

    return out;
}

antlrcpp::Any CompVisitor::visitReturnAct(IFCCParser::ReturnActContext *ctx) {
    // TODO: better expression parsing
    const string expression = visit(ctx->expr()).as<string>();
    const bool isConst = isdigit(expression.at(0)); // TODO: to be changed

    string out;
    if(isConst) {
        out = assm.constToRegister(expression, ASSM::REGISTER_RETURN);
    } else {
        const string variableAddress = variableAddressMap.find(expression)->second;
        out = assm.addrToRegister(variableAddress, ASSM::REGISTER_RETURN);
    }

    return out;
}

antlrcpp::Any CompVisitor::visitIdentifier(IFCCParser::IdentifierContext *ctx) {
    // TODO: use AST
    return ctx->IDENTIFIER()->getText();
}

antlrcpp::Any CompVisitor::visitConst(IFCCParser::ConstContext *ctx) {
    // TODO: use AST
    return ctx->CONST()->getText();
}

antlrcpp::Any CompVisitor::visitParenthesis(IFCCParser::ParenthesisContext *ctx) {
    // TODO: use AST
    return "(" + visit(ctx->expr()).as<string>() + ")";
}

antlrcpp::Any CompVisitor::visitOperation(IFCCParser::OperationContext *ctx) {
    // TODO: user AST
    return visit(ctx->expr(0)).as<string>() + ctx->OPERATOR()->getText() + visit(ctx->expr(1)).as<string>();
}