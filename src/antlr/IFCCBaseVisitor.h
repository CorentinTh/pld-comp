
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

  virtual antlrcpp::Any visitExpression(IFCCParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationConst(IFCCParser::DeclarationConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationAssign(IFCCParser::DeclarationAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectationConst(IFCCParser::AffectationConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnConst(IFCCParser::ReturnConstContext *ctx) override {
    return visitChildren(ctx);
  }


};

