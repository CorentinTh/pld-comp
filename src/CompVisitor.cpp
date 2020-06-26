#include <string>
#include <vector>
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
    string out = "";

    // Instructions
    for (int i = 0; i < ctx->functionDeclaration().size(); i++) {
        antlrcpp::Any visited = visit(ctx->functionDeclaration(i));
        if (visited.isNotNull()) {
            out.append(visited.as<std::string>() + "\n");
        }
    }

    return out;
}

//Declares a function with zero arguments such as int foo() { return 5 }
antlrcpp::Any CompVisitor::visitZeroArgumentsFunction(IFCCParser::ZeroArgumentsFunctionContext *ctx) {
    //Create the label
    string functionLabel = ctx->IDENTIFIER()->getText();
    string out = "";
    out.append(".global ").append(functionLabel + "\n");
    out.append(functionLabel + ":\n");

    //Insert scope to the stack
    variableManager->pushScope(functionLabel);

    //Generate the Prologue
    out.append(ASSM::INDENT + "pushq %rbp\n");
    out.append(ASSM::INDENT + "movq %rsp, %rbp\n");
    out.append(ASSM::INDENT + "subq 0x10, %rsp\n");

    // Instructions
    for (int i = 0; i < ctx->instruction().size(); i++) {
        antlrcpp::Any visited = visit(ctx->instruction(i));
        if (visited.isNotNull()) {
            out.append(ASSM::INDENT + visited.as<std::string>() + "\n");
        }
    }

    //Remove scope
    variableManager->popScope();

    //Generate the Epilogue
    out.append(ASSM::INDENT + "addq $0x10, %rsp\n");
    out.append(ASSM::INDENT + "movq %rbp, %rsp\n");
    out.append(ASSM::INDENT + "popq %rbp\n");
    out.append(ASSM::INDENT + "ret\n");

    return out;
}

//Declares a function with several arguments such as int foo(int a, int b, int c) { doStuff(); }
antlrcpp::Any CompVisitor::visitMultiArgumentFunction(IFCCParser::MultiArgumentFunctionContext *ctx) {
    //Create the label
    string functionLabel = ctx->IDENTIFIER().at(0)->getText();
    string out = ".text\n";
    out.append(".global ").append(functionLabel + "\n");
    out.append(functionLabel + ":\n");

    //Insert scope to the stack
    variableManager->pushScope(functionLabel);

    //Generate the Prologue
    out.append(ASSM::INDENT + "pushq %rbp\n");
    out.append(ASSM::INDENT + "movq %rsp, %rbp\n");
    out.append(ASSM::INDENT + "subq 0x10, %rsp\n");

    int paramOffset = 4;
    //Add params into variable Map
    for (int i = 1; i < ctx->IDENTIFIER().size(); i++) {
        string prefix = variableManager->generatePrefix();
        string variableName = prefix.append(ctx->IDENTIFIER().at(i)->getText());
        string variableAddress = to_string(paramOffset);
        variableManager->putVariableAtAddress(variableName, variableAddress);
        paramOffset += 4;

        //foo(a,b,c)
        // a -> %rbp - 4
        // b -> %rbp - 8
        // c -> %rbp - 12
    }

    // Instructions
    for (int i = 0; i < ctx->instruction().size(); i++) {
        antlrcpp::Any visited = visit(ctx->instruction(i));
        if (visited.isNotNull()) {
            out.append(ASSM::INDENT + visited.as<std::string>() + "\n");
        }
    }

    //Remove scope
    variableManager->popScope();

    //Generate the Epilogue
    out.append(ASSM::INDENT + "addq $0x10, %rsp\n");
    out.append(ASSM::INDENT + "movq %rbp, %rsp\n");
    out.append(ASSM::INDENT + "popq %rbp\n");
    out.append(ASSM::INDENT + "ret\n");
    return out;
}

//Executes a function with no arguments
antlrcpp::Any CompVisitor::visitZeroArgumentFunctionCall(IFCCParser::ZeroArgumentFunctionCallContext *ctx) {
    string functionLabel = ctx->IDENTIFIER()->getText();
    string out = "call ";
    out.append(functionLabel + "\n");
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
    /*
    std::stringstream stream;
    stream << std::hex << ctx->CONST().size() * 4;
    string cleanArgument = std::string(stream.str());
     */
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
    const string variableAddress = variableManager->getNextAddress();
    variableManager->putVariableAtAddress(variableName, variableAddress);

    ASTNode *expression = visit(ctx->expr()).as<ASTNode *>();
    string out;

    if (expression->type == EXPR) {
        out.append(expression->toASM()).append(ASSM::INDENT).append(
                ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    } else if (expression->type == VALUE) {
        out
                .append(ASSM::registerToAddr(expression->toASM(), variableAddress));
    } else {
        out
                .append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_A))
                .append("\n")
                .append(ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

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
    if (expression->type == EXPR) {
        out.append(expression->toASM()).append(
                ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    } else if (expression->type == VALUE) {
        out
                .append(ASSM::registerToAddr(expression->toASM(), variableAddress));
    } else {
        out
                .append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_A))
                .append("\n")
                .append(ASSM::registerToAddr(ASSM::REGISTER_A, variableAddress));
    }

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

    if (expression->type != EXPR) {
        out.append(ASSM::registerToRegister(expression->toASM(), ASSM::REGISTER_RETURN));
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

antlrcpp::Any CompVisitor::visitFunctionEvaluation(IFCCParser::FunctionEvaluationContext *ctx) {
    return visit(ctx->functionCall());
}