#include <string>
#include "CompVisitor.h"
#include "ASSM.h"
#include "AST.h"
#include "Logger.h"
#include "VariableManager.h"

using namespace std;

VariableManager *variableManager = VariableManager::getInstance();

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    string out = "";
    out.append(visit(ctx->prog()).as<std::string>());
    return out;
}

antlrcpp::Any CompVisitor::visitProg(IFCCParser::ProgContext *ctx) {
    // Prologue
    string out = "";

    // Instructions
    for (int i = 0; i < ctx->functionDeclaration().size(); i++) {
        antlrcpp::Any visited = visit(ctx->functionDeclaration(i));
        if (visited.isNotNull()) {
            out.append(visited.as<std::string>() + "\n");
        }
    }

    // Epilogue
    return out;
}

//Declares a function with zero arguments such as int foo() { return 5 }
antlrcpp::Any CompVisitor::visitZeroArgumentsFunction(IFCCParser::ZeroArgumentsFunctionContext *ctx) {
    //Create the label
    string functionLabel = ctx->IDENTIFIER()->getText();
    string out = ".text\n";
    out.append(".global ").append(functionLabel + "\n");
    out.append(functionLabel + ":\n");

    //Generate the Prologue
    out.append(ASSM::INDENT + "pushq %rbp\n");
    out.append(ASSM::INDENT + "movq %rsp, %rbp\n");

    // Instructions
    for (int i = 0; i < ctx->instruction().size(); i++) {
        antlrcpp::Any visited = visit(ctx->instruction(i));
        if (visited.isNotNull()) {
            out.append(ASSM::INDENT + visited.as<std::string>() + "\n");
        }
    }

    //Generate the Epilogue
    out.append(WHITESPACE + "popq %rbp\n");
    out.append(WHITESPACE + "ret\n");

    return out;
}

//Declares a function with several arguments such as int foo(int a, int b, int c) { doStuff(); }
antlrcpp::Any CompVisitor::visitMultiArgumentFunction(IFCCParser::MultiArgumentFunctionContext *ctx) {
    //Create the label
    string functionLabel = ctx->IDENTIFIER().at(0)->getText();
    string out = ".text\n";
    out.append(".global ").append(functionLabel + "\n");
    out.append(functionLabel + ":\n");

    //Generate the Prologue
    out.append(WHITESPACE + "pushq %rbp\n");
    out.append(WHITESPACE + "movq %rsp, %rbp\n");

    int paramOffset = 4;
    //Add params into variable Map
    for (int i = 1; i < ctx->IDENTIFIER().size(); i++) {
        string variableName = ctx->IDENTIFIER().at(i)->getText();
        string variableAddress = to_string(paramOffset);
        variableManager.putVariableAtAddress(variableName, variableAddress);
        paramOffset += 4;
    }

    // Instructions
    for (int i = 0; i < ctx->instruction().size(); i++) {
        antlrcpp::Any visited = visit(ctx->instruction(i));
        if (visited.isNotNull()) {
            out.append(WHITESPACE + visited.as<std::string>() + "\n");
        }
    }

    //Generate the Epilogue
    out.append(WHITESPACE + "popq %rbp\n");
    out.append(WHITESPACE + "ret\n");
    return out;
}

//Executes a function with no arguments
antlrcpp::Any CompVisitor::visitZeroArgumentFunctionCall(IFCCParser::ZeroArgumentFunctionCallContext *ctx) {
    string functionLabel = ctx->IDENTIFIER()->getText();
    string out = "call ";
    out.append(functionLabel + "\n");

    //Pas de nettoiage des arguments puisqu'il n'y a pas d'arguments
    return out;
}

antlrcpp::Any CompVisitor::visitMultiArgumentFunctionCall(IFCCParser::MultiArgumentFunctionCallContext *ctx) {
    string functionLabel = ctx->IDENTIFIER()->getText();
    string out = "";
    //Mettre les arguments dans la stack de droite à gauche
    for (int i = ctx->CONST().size() - 1; i >= 0; i--) {
        const string value = ctx->CONST().at(i)->getText();
        out.append("pushq $" + value + "\n");
    }

    //Appeller la fonction avec call
    out.append(ASSM::INDENT + "call " + functionLabel + "\n");

    //Nettoier les arguments
    std::stringstream stream;
    stream << std::hex << ctx->CONST().size();
    string cleanArgument = std::string(stream.str());
    out.append(WHITESPACE + "add $0x" + cleanArgument + ", %rsp");
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