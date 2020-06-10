#include <string>
#include <iostream>
#include <map>
#include "CompVisitor.h"

using namespace std;

const string WHITESPACE = "  ";
const string BASE_POINTER = "%rbp";
const string REGISTER_A = "%eax";
const string REGISTER_B = "%ebx";
const string REGISTER_C = "%ecx";

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
    for (int i = 0; i < ctx->instruction().size(); i++) {
        out.append(visit(ctx->instruction(i)).as<std::string>() + "\n");
    }
    out.append(WHITESPACE + "popq %rbp\n");
    out.append(WHITESPACE + "ret\n");
    return out;
}

antlrcpp::Any CompVisitor::visitInstruction(IFCCParser::InstructionContext *ctx) {
    string out = visit(ctx->expression()).as<std::string>();
    return out;
}

antlrcpp::Any CompVisitor::visitExpression(IFCCParser::ExpressionContext *ctx) {
    string out =  visit(ctx->declaration()).as<std::string>();
    return out;
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const int currentMapSize = variableAddressMap.size();
    const string variableAddress = to_string((currentMapSize + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
    return "";
}

antlrcpp::Any CompVisitor::visitDeclarationConst(IFCCParser::DeclarationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const int currentMapSize = variableAddressMap.size();
    const string variableAddress = to_string((currentMapSize + 1) * 4);
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
    string out = WHITESPACE + "movl $" + ctx->CONST()->getText() + ", -" + variableAddress + "(%rbp)\n";
    return out;
}

antlrcpp::Any CompVisitor::visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *ctx) {
    const string leftVariableIdentifier = ctx->IDENTIFIER(0)->getText();
    const string rightVariableIdentifier = ctx->IDENTIFIER(1)->getText();

    const string leftVariableAddress = variableAddressMap.find(leftVariableIdentifier)->first;
    const string rightVariableAddress = variableAddressMap.find(rightVariableIdentifier)->first;

    string out = WHITESPACE + "movl -" + rightVariableAddress + "(" + BASE_POINTER + ") , " + REGISTER_A + "\n";
    out.append(WHITESPACE + "movl " + REGISTER_A + ", -" + leftVariableAddress + "(" + BASE_POINTER + ")\n");
    return out;
}

antlrcpp::Any CompVisitor::visitAffectationConst(IFCCParser::AffectationConstContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const int constValue = stoi(ctx->CONST()->getText());
    const string variableAddress = variableAddressMap.find(variableName)->second;

    return NULL;
}

antlrcpp::Any CompVisitor::visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();
    const string variableAddress = variableAddressMap.find(variableName)->second;
    string out = WHITESPACE + "movl -" + variableAddress + "(%rbp), %eax\n";
    return out;
}

antlrcpp::Any CompVisitor::visitReturnConst(IFCCParser::ReturnConstContext *ctx) {
    const string constValue = ctx->CONST()->getText();
    string out = WHITESPACE + "movl $" + constValue + ", %" + REGISTER_A;
    return out;
}