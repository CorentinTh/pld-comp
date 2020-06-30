
// Generated from src/antlr/IFCCParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "IFCCParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IFCCParser.
 */
class  IFCCParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IFCCParser.
   */
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitGlobalItem(IFCCParser::GlobalItemContext *context) = 0;

    virtual antlrcpp::Any visitFunction(IFCCParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitAction(IFCCParser::ActionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(IFCCParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(IFCCParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationMulti(IFCCParser::DeclarationMultiContext *context) = 0;

    virtual antlrcpp::Any visitType(IFCCParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(IFCCParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(IFCCParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(IFCCParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConst(IFCCParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitCharLiteral(IFCCParser::CharLiteralContext *context) = 0;

    virtual antlrcpp::Any visitOperationBinary(IFCCParser::OperationBinaryContext *context) = 0;

    virtual antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *context) = 0;

    virtual antlrcpp::Any visitOperationUnary(IFCCParser::OperationUnaryContext *context) = 0;


};

