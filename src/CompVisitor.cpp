#include <string>
#include "CompVisitor.h"
#include "ASSM.h"
#include "AST.h"
#include "Logger.h"
#include "VariableManager.h"
#include "TagManager.h"

using namespace std;

VariableManager *variableManager = VariableManager::getInstance();

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    string out = ".text\n";
    out.append(".global main\n");
    out.append(visit(ctx->prog()).as<std::string>());
    return out;
}

antlrcpp::Any CompVisitor::visitProg(IFCCParser::ProgContext *ctx) {
    // Prologue
    string out = "main:\n";
    out.append(ASSM::INDENT + "pushq %rbp\n");
    out.append(ASSM::INDENT + "movq %rsp, %rbp\n");

    // Instructions
    for (int i = 0; i < ctx->statement().size(); i++) {
        antlrcpp::Any visited = visit(ctx->statement(i));
        if (visited.isNotNull()) {
            out.append(visited.as<std::string>() + "\n");
        }
    }

    // Epilogue
    out.append(ASSM::INDENT + "popq %rbp\n");
    out.append(ASSM::INDENT + "ret\n");

    return out;
}

antlrcpp::Any CompVisitor::visitInstruction(IFCCParser::InstructionContext *ctx) {
    return visit(ctx->action());
}

antlrcpp::Any CompVisitor::visitAction(IFCCParser::ActionContext *ctx) {
    return visit(ctx->children.at(0));
}

antlrcpp::Any CompVisitor::visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    if (variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is already defined");
        exit(EXIT_FAILURE);
    }
    const string variableAddress = variableManager->getNextAddress();
    variableManager->putVariableAtAddress(variableName, variableAddress);

    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();
    string out;

    if (expression->type == EXPR) {
        out.append(expression->toASM()).append(ASSM::INDENT).append(
                ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    } else if (expression->type == VALUE) {
        out
                .append(ASSM::INDENT)
                .append(ASSM::registerToAddr(expression->toASM(), variableAddress));
    } else {
        out
                .append(ASSM::INDENT)
                .append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_A))
                .append("\n")
                .append(ASSM::INDENT)
                .append(ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

    return out;
}

antlrcpp::Any CompVisitor::visitAffectation(IFCCParser::AffectationContext *ctx) {
    // TODO: better expression parsing
    const string variableName = ctx->IDENTIFIER()->getText();

    if (!variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is not defined");
        exit(EXIT_FAILURE);
    }

    const string variableAddress = variableManager->getAddress(variableName);
    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();

    string out;
    if (expression->type == EXPR) {
        out.append(expression->toASM()).append(ASSM::INDENT).append(
                ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    } else if (expression->type == VALUE) {
        out
                .append(ASSM::INDENT)
                .append(ASSM::registerToAddr(expression->toASM(), variableAddress));
    } else {
        out
                .append(ASSM::INDENT)
                .append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_A))
                .append("\n")
                .append(ASSM::INDENT)
                .append(ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

    return out;
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string variableName = ctx->IDENTIFIER()->getText();

    if (variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is already defined");
        exit(EXIT_FAILURE);
    }

    const string variableAddress = variableManager->getNextAddress();
    variableManager->putVariableAtAddress(variableName, variableAddress);

    return nullptr;
}

antlrcpp::Any CompVisitor::visitDeclarationMulti(IFCCParser::DeclarationMultiContext *ctx) {
    // Instructions
    for (int i = 0; i < ctx->IDENTIFIER().size(); i++) {
        if (ctx->IDENTIFIER(i) != nullptr) {
            const string variableName = ctx->IDENTIFIER(i)->getText();
            if (variableManager->variableExists(variableName)) {
                Logger::error("Variable " + variableName + " is already defined");
                exit(EXIT_FAILURE);
            } else {
                const string variableAddress = variableManager->getNextAddress();
                variableManager->putVariableAtAddress(variableName, variableAddress);
            }
        }
    }
    return nullptr;
}


antlrcpp::Any CompVisitor::visitReturnAct(IFCCParser::ReturnActContext *ctx) {
    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();
    string out;

    if (expression->type != EXPR) {
        out.append(ASSM::INDENT).append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_RETURN));
    } else {
        out.append(expression->toASM()).append("\n");
    }

    return out;
}


antlrcpp::Any CompVisitor::visitIdentifier(IFCCParser::IdentifierContext *ctx) {
    ASTIdentifier *node = new ASTIdentifier();
    node->identifier = ctx->IDENTIFIER()->getText();
    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitConst(IFCCParser::ConstContext *ctx) {
    ASTValue *node = new ASTValue();
    node->value = ctx->CONST()->getText();
    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitParenthesis(IFCCParser::ParenthesisContext *ctx) {
    // TODO: handle parenthesis
    return visit(ctx->expr()).as<ASTNode *>();
}

antlrcpp::Any CompVisitor::visitOperationMultDiv(IFCCParser::OperationMultDivContext *ctx) {
    ASTExpr *node = new ASTExpr();

    node->op = ctx->OP->getText();
    node->left = visit(ctx->expr(0)).as<ASTNode *>();
    node->right = visit(ctx->expr(1)).as<ASTNode *>();
    node->left->parent = (ASTNode *) node;
    node->right->parent = (ASTNode *) node;

    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitOperationPlusMinus(IFCCParser::OperationPlusMinusContext *ctx) {
    ASTExpr *node = new ASTExpr();

    node->op = ctx->OP->getText();
    node->left = visit(ctx->expr(0)).as<ASTNode *>();
    node->right = visit(ctx->expr(1)).as<ASTNode *>();
    node->left->parent = (ASTNode *) node;
    node->right->parent = (ASTNode *) node;

    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitIfStmt(IFCCParser::IfStmtContext *ctx) {
    string out;
    string endIFTag;
    string elseTag;

    if (ctx->actionELSE != nullptr) {
        elseTag = TagManager::generateTag();
        endIFTag = TagManager::generateTag();
    } else {
        endIFTag = TagManager::generateTag();
    }

    ASTNode *conditionAst = visit(ctx->condition).as<ASTNode *>();

    if (conditionAst->type != EXPR) {
        out.append(ASSM::INDENT).append("cmpl $0, ").append(conditionAst->toASM()).append("\n");
    } else {
        out.append(conditionAst->toASM());
        out.append(ASSM::INDENT).append("cmpl $0, ").append(ASSM::REGISTER_A);
    }

    if (ctx->actionELSE != nullptr) {
        out.append(ASSM::INDENT).append("je ").append(elseTag).append("\n");
    }else{
        out.append(ASSM::INDENT).append("je ").append(endIFTag).append("\n");
    }

    out.append(visit(ctx->actionIF).as<string>()).append("\n");
    if (ctx->actionELSE != nullptr) {
        out.append(ASSM::INDENT).append("jmp ").append(endIFTag).append("\n");
        out.append(elseTag).append(":").append("\n");
        out.append(visit(ctx->actionELSE).as<string>()).append("\n");
    }

    out.append(endIFTag).append(":");

    return out;
}

antlrcpp::Any CompVisitor::visitBlock(IFCCParser::BlockContext *ctx) {
    string out;

    for (int i = 0; i < ctx->statement().size(); i++) {
        antlrcpp::Any action = visit(ctx->statement(i));
        if (action.isNotNull()) {
            out.append(action.as<std::string>() + "\n");
        }
    }

    return out;
}

antlrcpp::Any CompVisitor::visitStatement(IFCCParser::StatementContext *ctx) {
    return visit(ctx->children.at(0));
}
