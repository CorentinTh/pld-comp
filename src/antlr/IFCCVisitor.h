
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "IFCC.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IFCC.
 */
class  IFCCVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IFCC.
   */
    virtual antlrcpp::Any visitAxiom(IFCC::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitGlobalItem(IFCC::GlobalItemContext *context) = 0;

    virtual antlrcpp::Any visitFunction(IFCC::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(IFCC::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitAction(IFCC::ActionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(IFCC::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(IFCC::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCC::DeclarationEmptyContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationAffectation(IFCC::DeclarationAffectationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationMulti(IFCC::DeclarationMultiContext *context) = 0;

    virtual antlrcpp::Any visitType(IFCC::TypeContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(IFCC::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(IFCC::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnAct(IFCC::ReturnActContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(IFCC::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConst(IFCC::ConstContext *context) = 0;

    virtual antlrcpp::Any visitOperationBinary(IFCC::OperationBinaryContext *context) = 0;

    virtual antlrcpp::Any visitParenthesis(IFCC::ParenthesisContext *context) = 0;

    virtual antlrcpp::Any visitOperationUnary(IFCC::OperationUnaryContext *context) = 0;


};

