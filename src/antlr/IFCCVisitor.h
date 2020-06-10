
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

    virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(IFCCParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationConst(IFCCParser::DeclarationConstContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationAssign(IFCCParser::DeclarationAssignContext *context) = 0;

    virtual antlrcpp::Any visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitAffectationConst(IFCCParser::AffectationConstContext *context) = 0;

    virtual antlrcpp::Any visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitReturnConst(IFCCParser::ReturnConstContext *context) = 0;


};

