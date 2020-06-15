#include "antlr/IFCCVisitor.h"

class CompVisitor : public IFCCVisitor {
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *ctx) override;

    virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *ctx) override;

    virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *ctx) override;

    virtual antlrcpp::Any visitAction(IFCCParser::ActionContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) override;

    virtual antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *ctx) override;

    virtual antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *ctx) override;

    virtual antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *ctx) override;

    virtual antlrcpp::Any visitConst(IFCCParser::ConstContext *ctx) override;

    virtual antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *ctx) override;

    virtual antlrcpp::Any visitOperation(IFCCParser::OperationContext *ctx) override;
};
