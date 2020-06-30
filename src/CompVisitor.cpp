#include <string>
#include <vector>
#include "CompVisitor.h"
#include "ASSM.h"
#include "AST.h"
#include "Logger.h"
#include "VariableManager.h"
#include "TagManager.h"
#include "TmpVariable.h"

using namespace std;

VariableManager *variableManager = VariableManager::getInstance();

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    string out = ".text\n";
    out.append(".global main\n");

    for (auto item :ctx->globalItem()) {
        antlrcpp::Any result = visit(item);

        if (result.isNotNull()) {
            out.append(result.as<std::string>());
        }
    }

    return out;
}

antlrcpp::Any CompVisitor::visitGlobalItem(IFCCParser::GlobalItemContext *ctx) {
    return visit(ctx->children.at(0)).as<string>();
}

antlrcpp::Any CompVisitor::visitFunction(IFCCParser::FunctionContext *ctx) {
    //Create the label
    string functionLabel = ctx->functionLabel->getText();
    string out = ".text\n";
    out.append(".global ").append(functionLabel + "\n");
    out.append(functionLabel + ":\n");

    //Insert scope to the stack
    variableManager->pushScope(functionLabel);

    //Generate the Prologue
    out.append(ASSM::INDENT + "pushq %rbp\n");
    out.append(ASSM::INDENT + "movq %rsp, %rbp\n");
    out.append(ASSM::INDENT + "subq {stackSize}, %rsp\n");

    if (ctx->IDENTIFIER().size() > 0) {
        //Add params into variable Map
        int paramOffset = 4;
        for (int i = 0; i < ctx->IDENTIFIER().size(); i++) {
            string prefix = variableManager->generatePrefix();
            string variableName = prefix.append(ctx->IDENTIFIER().at(i)->getText());
            string variableAddress = to_string(paramOffset);
            variableManager->putVariableAtAddress(variableName, variableAddress);
            paramOffset += 4;
        }
    }

    out.append(visit(ctx->block()).as<std::string>());

    //Remove scope
    variableManager->popScope();

    //Generate the Epilogue
    out.append(ASSM::INDENT + "addq {stackSize}, %rsp\n");
    out.append(ASSM::INDENT + "movq %rbp, %rsp\n");
    out.append(ASSM::INDENT + "popq %rbp\n");
    out.append(ASSM::INDENT + "ret\n");

    int varAmount = variableManager->functionVariableAmount(functionLabel);
    int stackSize = (varAmount / 4 + (varAmount % 4 == 0 ? 0 : 1)) * 16;
    int index;
    while ((index = out.find("{stackSize}")) != string::npos) {
        out.replace(index, 11, "$" + to_string(stackSize));
    }

    return out;
}

antlrcpp::Any CompVisitor::visitInstruction(IFCCParser::InstructionContext *ctx) {
    return visit(ctx->action());
}

antlrcpp::Any CompVisitor::visitAction(IFCCParser::ActionContext *ctx) {
    return visit(ctx->children.at(0));
}

antlrcpp::Any CompVisitor::visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) {
    const string prefix = variableManager->generatePrefix();
    const string baseVariableName = ctx->IDENTIFIER()->getText();
    const string variableName = prefix + baseVariableName;

    if (variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is already defined");
        exit(EXIT_FAILURE);
    }

    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();
    string out;

    pair<string, string> expPair = expression->toASM();
    out.append(expPair.second);
    string address = expPair.first;

    TmpVariable::free(address);
    string cleanAddr = address.substr(1, address.size() - 7);
    variableManager->putVariableAtAddress(variableName, cleanAddr);

    return out;
}

antlrcpp::Any CompVisitor::visitAffectation(IFCCParser::AffectationContext *ctx) {
    // TODO: better expression parsing
    const string prefix = variableManager->generatePrefix();
    const string baseVariableName = ctx->IDENTIFIER()->getText();
    const string variableName = prefix + baseVariableName;


    if (!variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is not defined");
        exit(EXIT_FAILURE);
    }

    const string variableAddress = variableManager->getAddress(variableName);
    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();

    string out;

    pair<string, string> expPair = expression->toASM();
    out.append(expPair.second);
    string address = expPair.first;

    out.append(ASSM::registerToRegister(expPair.first, ASSM::REGISTER_A)).append("\n");
    out.append(ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));

    return out;
}

antlrcpp::Any CompVisitor::visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) {
    const string prefix = variableManager->generatePrefix();
    const string baseVariableName = ctx->IDENTIFIER()->getText();
    const string variableName = prefix + baseVariableName;

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
            const string prefix = variableManager->generatePrefix();
            const string baseVariableName = ctx->IDENTIFIER(i)->getText();
            const string variableName = prefix + baseVariableName;
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

    pair<string, string> expPair = expression->toASM();
    out.append(expPair.second);
    out.append(ASSM::registerToRegister(expPair.first, ASSM::REGISTER_RETURN));

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

    ASTNode *expression = visit(ctx->condition).as<ASTNode *>();

    pair<string, string> expPair = expression->toASM();
    out.append(expPair.second);
    out.append(ASSM::INDENT).append("cmpl $0, ").append(expPair.first).append("\n");

    if (ctx->actionELSE != nullptr) {
        out.append(ASSM::INDENT).append("je ").append(elseTag).append("\n");
    } else {
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

antlrcpp::Any CompVisitor::visitType(IFCCParser::TypeContext *ctx) {
    return antlrcpp::Any();
}

antlrcpp::Any CompVisitor::visitOperationBinary(IFCCParser::OperationBinaryContext *ctx) {
    ASTExpr *node = new ASTExpr();

    node->op = ctx->op->getText();
    node->left = visit(ctx->expr(0)).as<ASTNode *>();
    node->right = visit(ctx->expr(1)).as<ASTNode *>();
    node->left->parent = (ASTNode *) node;
    node->right->parent = (ASTNode *) node;

    return (ASTNode *) node;
}

antlrcpp::Any CompVisitor::visitOperationUnary(IFCCParser::OperationUnaryContext *ctx) {
    return antlrcpp::Any();
}

antlrcpp::Any CompVisitor::visitWhileStmt(IFCCParser::WhileStmtContext *ctx) {
    string out;
    string conditionTag = TagManager::generateTag();
    string blockTag = TagManager::generateTag();

    if (!ctx->isDoWhile) {
        out.append(ASSM::INDENT).append("jmp ").append(conditionTag).append("\n");
    }
    out.append(blockTag).append(":").append("\n");
    out.append(visit(ctx->statement()).as<string>()).append("\n");

    if (!ctx->isDoWhile) {
        out.append(conditionTag).append(":").append("\n");
    }

    ASTNode *expression = visit(ctx->condition).as<ASTNode *>();
    pair<string, string> expPair = expression->toASM();
    out.append(expPair.second);
    out.append(ASSM::INDENT).append("cmpl $0, ").append(expPair.first).append("\n");

    out.append(ASSM::INDENT).append("jne ").append(blockTag).append("\n");
    return out;
}

antlrcpp::Any CompVisitor::visitFunctionCall(IFCCParser::FunctionCallContext *ctx) {
    string functionLabel = ctx->functionLabel->getText();
    string out = "";

    for (int i = ctx->CONST().size() - 1; i >= 0; i--) {
        const string value = ctx->CONST().at(i)->getText();
        out.append("pushq $" + value + "\n");
    }

    out.append(ASSM::INDENT + "call " + functionLabel + "\n");

    return out;
}