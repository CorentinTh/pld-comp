#include "antlr/IFCCVisitor.h"

class CompVisitor : public IFCCVisitor {
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *ctx) override;

    virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *ctx) override;

    virtual antlrcpp::Any visitZeroArgumentsFunction(IFCCParser::ZeroArgumentsFunctionContext *ctx) override;

    virtual antlrcpp::Any visitMultiArgumentFunction(IFCCParser::MultiArgumentFunctionContext *ctx) override;

    virtual antlrcpp::Any visitZeroArgumentFunctionCall(IFCCParser::ZeroArgumentFunctionCallContext *ctx) override;

    virtual antlrcpp::Any visitMultiArgumentFunctionCall(IFCCParser::MultiArgumentFunctionCallContext *ctx) override;

    virtual antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *ctx) override;

    virtual antlrcpp::Any visitAction(IFCCParser::ActionContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *ctx) override;

    virtual antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *ctx) override;

    virtual antlrcpp::Any visitDeclarationMulti(IFCCParser::DeclarationMultiContext *ctx) override;

    virtual antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *ctx) override;

    virtual antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *ctx) override;

    virtual antlrcpp::Any visitConst(IFCCParser::ConstContext *ctx) override;

    virtual antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *ctx) override;

    virtual antlrcpp::Any visitOperationPlusMinus(IFCCParser::OperationPlusMinusContext *context) override;

    virtual antlrcpp::Any visitOperationMultDiv(IFCCParser::OperationMultDivContext *context) override;

};
