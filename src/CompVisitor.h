#include "antlr/IFCCVisitor.h"

class CompVisitor : public IFCCVisitor {
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *ctx) override;

    virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *ctx) override;

    virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *ctx) override;

    virtual antlrcpp::Any visitExpression(IFCCParser::ExpressionContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationConst(IFCCParser::DeclarationConstContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationAssign(IFCCParser::DeclarationAssignContext *ctx) override;

    virtual antlrcpp::Any visitAffectationIdentifier(IFCCParser::AffectationIdentifierContext *ctx) override;

    virtual antlrcpp::Any visitAffectationConst(IFCCParser::AffectationConstContext *ctx) override;

    virtual antlrcpp::Any visitReturnIdentifier(IFCCParser::ReturnIdentifierContext *ctx) override;

    virtual antlrcpp::Any visitReturnConst(IFCCParser::ReturnConstContext *ctx) override;
};
