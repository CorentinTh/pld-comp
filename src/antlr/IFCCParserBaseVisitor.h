
// Generated from src/antlr/IFCCParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "IFCCParserVisitor.h"


/**
 * This class provides an empty implementation of IFCCParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IFCCParserBaseVisitor : public IFCCParserVisitor {
public:

  virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalItem(IFCCParser::GlobalItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(IFCCParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAction(IFCCParser::ActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(IFCCParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(IFCCParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationMulti(IFCCParser::DeclarationMultiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(IFCCParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(IFCCParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(IFCCParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(IFCCParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(IFCCParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpr(IFCCParser::FunctionCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperationBinary(IFCCParser::OperationBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperationUnary(IFCCParser::OperationUnaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

