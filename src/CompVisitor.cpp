#include "CompVisitor.h"

antlrcpp::Any CompVisitor::visitAxiom(IFCCParser::AxiomContext *ctx) {
    return visit(ctx->prog());
}

antlrcpp::Any CompVisitor::visitProg(IFCCParser::ProgContext *ctx) {
    std::string out = "int main() {\n";
    for(int i = 0; i < ctx->inst().size(); i++) {
        out += visit(ctx->inst(i)).as<std::string>() + "\n";
    }
    return out + "}";
}

antlrcpp::Any CompVisitor::visitInst(IFCCParser::InstContext *ctx) {
    std::string out = visit(ctx->expr()).as<std::string>() + ";";
    return out;
}

antlrcpp::Any CompVisitor::visitIdentExpr(IFCCParser::IdentExprContext *ctx) {
    return "int " + ctx->IDENTIFIER()->getText() + " = " + ctx->CONST()->getText();
}

antlrcpp::Any CompVisitor::visitReturnExpr(IFCCParser::ReturnExprContext *ctx) {
    return "return " + ctx->IDENTIFIER()->getText();
}