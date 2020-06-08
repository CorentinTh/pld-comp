
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

  virtual antlrcpp::Any visitInst(IFCCParser::InstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentExpr(IFCCParser::IdentExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnExpr(IFCCParser::ReturnExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

