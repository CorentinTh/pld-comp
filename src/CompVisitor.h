#include "antlr/IFCCVisitor.h"

class CompVisitor : public IFCCVisitor {
    virtual antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *context) override;

    virtual antlrcpp::Any visitProg(IFCCParser::ProgContext *context) override;

    virtual antlrcpp::Any visitInst(IFCCParser::InstContext *context) override;

    virtual antlrcpp::Any visitIdentExpr(IFCCParser::IdentExprContext *context) override;

    virtual antlrcpp::Any visitReturnExpr(IFCCParser::ReturnExprContext *context) override;
};
