
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "IFCCParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IFCCParser.
 */
class  IFCCVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IFCCParser.
   */
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitInst(IFCCParser::InstContext *context) = 0;

    virtual antlrcpp::Any visitIdentExpr(IFCCParser::IdentExprContext *context) = 0;

    virtual antlrcpp::Any visitReturnExpr(IFCCParser::ReturnExprContext *context) = 0;


};

