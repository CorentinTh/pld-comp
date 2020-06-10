#include <string>
#include <iostream>
#include <map>
#include "CompVisitor.h"

using namespace std;

const string WHITESPACE = "  ";
map<string, string> variableAddressMap;

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    string out = ".text  #declaration of 'text' section\n";
    out.append(".global main #entry point to the ELF linker or loader\n");
    out.append(visit(ctx->prog()).as<std::string>());
    return out;
}

antlrcpp::Any CompVisitor::visitProg(IFCCParser::ProgContext *ctx) {
    string out = "main:\n";
    out.append(WHITESPACE + "pushq %rbp\n");
    out.append(WHITESPACE + "movq %rsp, %rbp\n");
    for (int i = 0; i < ctx->inst().size(); i++) {
        out.append(visit(ctx->inst(i)).as<std::string>() + "\n");
    }
    out.append(WHITESPACE + "popq %rbp\n");
    out.append(WHITESPACE + "ret\n");
    return out;
}

antlrcpp::Any CompVisitor::visitInst(IFCCParser::InstContext *ctx) {
    string out = visit(ctx->expr()).as<std::string>();
    return out;
}

antlrcpp::Any CompVisitor::visitIdentExpr(IFCCParser::IdentExprContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const int currentMapSize = variableAddressMap.size();
    const string variableAddress = to_string((currentMapSize + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
    string out = WHITESPACE + "movl $" + ctx->CONST()->getText() + ", -" + variableAddress + "(%rbp)\n";
    return out;
}

antlrcpp::Any CompVisitor::visitReturnExpr(IFCCParser::ReturnExprContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = variableAddressMap.find(variableName)->second;
    string out = WHITESPACE + "movl -" + variableAddress + "(%rbp), %eax\n";
    return out;
}