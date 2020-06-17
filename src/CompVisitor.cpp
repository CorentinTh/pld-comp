#include <string>
#include <map>
#include "CompVisitor.h"
#include "ASSM.h"
#include "AST.h"
#include "Logger.h"
#include "VariableManager.h"

using namespace std;

const string WHITESPACE = "  ";
ASSM assm;
VariableManager variableManager;

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
    return visit(ctx->action());
}

antlrcpp::Any CompVisitor::visitAction(IFCCParser::ActionContext *ctx) {
    return visit(ctx->children.at(0));
}

antlrcpp::Any CompVisitor::visitDeclaratictation(IFCCParser::DeclarationAffectationContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    if (variableManager.variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is already defined");
        exit(EXIT_FAILURE);
    }
    const string variableAddress = variableManager.getNextAddress();
    variableManager.putVariableAtAddress(variableName, variableAddress);

    const string expression = visit(ctx->expr()).as<string>();
    return assm.constToAddr(expression, variableAddress);
}

antlrcpp::Any CompVisitor::visitAffectation(IFCCParser::AffectationContext *ctx) {
    // TODO: better expression parsing
    const string variableName = ctx->IDENTIFIER()->getText();

    if (!variableManager.variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is not defined");
        exit(EXIT_FAILURE);
    }

    const string variableAddress = variableManager.getAddress(variableName);
    const string expression = visit(ctx->expr()).as<string>();

    string out;
    const bool isConst = isdigit(expression.at(0)); // TODO: to be changed

    if (isConst) {
        out = assm.constToAddr(expression, variableAddress);
    } else {
        // TODO: AST thing
        // TODO
        string rightVariableAddress = variableManager.getAddress(expression);
        out = assm.addrToRegister(rightVariableAddress, ASSM::REGISTER_A);
        out.append("\n" + WHITESPACE);
        out.append(assm.registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

    return out;
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    if (variableManager.variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is already defined");
        exit(EXIT_FAILURE);
    }

    const string variableAddress = variableManager.getNextAddress();
    variableManager.putVariableAtAddress(variableName, variableAddress);

    return nullptr;
}

antlrcpp::Any CompVisitor::visitDeclarationMulti(IFCCParser::DeclarationMultiContext *ctx) {
    // Instructions
    for (int i = 0; i < ctx->IDENTIFIER().size(); i++) {
        if (ctx->IDENTIFIER(i) != nullptr) {
            const string variableName = ctx->IDENTIFIER(i)->getText();
            if (variableManager.variableExists(variableName)) {
                Logger::error("Variable " + variableName + " is already defined");
                exit(EXIT_FAILURE);
            } else {
                const string variableAddress = variableManager.getNextAddress();
                variableManager.putVariableAtAddress(variableName, variableAddress);
            }
        }
    }
    return nullptr;
}


antlrcpp::Any CompVisitor::visitReturnAct(IFCCParser::ReturnActContext *ctx) {
    // TODO: better expression parsing
    const string expression = visit(ctx->expr()).as<string>();
    const bool isConst = isdigit(expression.at(0)); // TODO: to be changed

    string out;
    if (isConst) {
        out = assm.constToRegister(expression, ASSM::REGISTER_RETURN);
    } else {
        // TODO: AST
        const string variableAddress = variableManager.getAddress(expression);
        out = assm.addrToRegister(variableAddress, ASSM::REGISTER_RETURN);
    }
    return out;
}


antlrcpp::Any CompVisitor::visitIdentifier(IFCCParser::IdentifierContext *ctx) {
    ASTIdentifier *node = new ASTIdentifier;
    node->identifier = ctx->IDENTIFIER()->getText();
    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitConst(IFCCParser::ConstContext *ctx) {
    ASTValue *node = new ASTValue;
    node->value = ctx->CONST()->getText();
    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitParenthesis(IFCCParser::ParenthesisContext *ctx) {
    // TODO: handle parenthesis
    return visit(ctx->expr()).as<ASTNode *>();
}

antlrcpp::Any CompVisitor::visitOperation(IFCCParser::OperationContext *ctx) {
    ASTExpr *node = new ASTExpr;

    node->op = ctx->OPERATOR()->getText();
    node->left = visit(ctx->expr(0)).as<ASTNode *>();
    node->right = visit(ctx->expr(1)).as<ASTNode *>();

    cout << node->toASM() << endl;

    return (ASTNode *) node;
}