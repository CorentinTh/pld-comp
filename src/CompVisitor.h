/**
 *      PLD-COMP - INSA Lyon
 *           June 2020
 *
 *      - Balthazar Frolin
 *      - Bastien Marsaud
 *      - Marc Meillac
 *      - Corentin Thomasset
 *      - Lucca Paffi
 */

#include "antlr/IFCCParserVisitor.h"

class CompVisitor : public IFCCParserVisitor {
    antlrcpp::Any visitAxiom(IFCCParser::AxiomContext *context) override;

    antlrcpp::Any visitGlobalItem(IFCCParser::GlobalItemContext *context) override;

    antlrcpp::Any visitFunction(IFCCParser::FunctionContext *context) override;

    antlrcpp::Any visitInstruction(IFCCParser::InstructionContext *context) override;

    antlrcpp::Any visitAction(IFCCParser::ActionContext *context) override;

    antlrcpp::Any visitStatement(IFCCParser::StatementContext *context) override;

    antlrcpp::Any visitBlock(IFCCParser::BlockContext *context) override;

    antlrcpp::Any visitDeclarationEmpty(IFCCParser::DeclarationEmptyContext *context) override;

    antlrcpp::Any visitDeclarationAffectation(IFCCParser::DeclarationAffectationContext *context) override;

    antlrcpp::Any visitDeclarationMulti(IFCCParser::DeclarationMultiContext *context) override;

    antlrcpp::Any visitType(IFCCParser::TypeContext *context) override;

    antlrcpp::Any visitAffectation(IFCCParser::AffectationContext *context) override;

    antlrcpp::Any visitIfStmt(IFCCParser::IfStmtContext *context) override;

    antlrcpp::Any visitWhileStmt(IFCCParser::WhileStmtContext *context) override;

    antlrcpp::Any visitReturnAct(IFCCParser::ReturnActContext *context) override;

    antlrcpp::Any visitFunctionCall(IFCCParser::FunctionCallContext *context) override;

    antlrcpp::Any visitIdentifier(IFCCParser::IdentifierContext *context) override;

    antlrcpp::Any visitConst(IFCCParser::ConstContext *context) override;

    antlrcpp::Any visitOperationBinary(IFCCParser::OperationBinaryContext *context) override;

    antlrcpp::Any visitParenthesis(IFCCParser::ParenthesisContext *context) override;

    antlrcpp::Any visitOperationUnary(IFCCParser::OperationUnaryContext *context) override;

    antlrcpp::Any visitFunctionCallExpr(IFCCParser::FunctionCallExprContext *ctx) override;

    antlrcpp::Any visitCharLiteral(IFCCParser::CharLiteralContext *context) override;

};
