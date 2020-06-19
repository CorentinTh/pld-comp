
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "IFCCVisitor.h"


/**
 * This class provides an empty implementation of IFCCVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IFCCBaseVisitor : public IFCCVisitor {
public:

  virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAction(IFCCParser::ActionContext *ctx) override {
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

  virtual antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(IFCCParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperationPlusMinus(IFCCParser::OperationPlusMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperationMultDiv(IFCCParser::OperationMultDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }


};

