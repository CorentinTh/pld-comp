#include "antlr/IFCCVisitor.h"

class CompVisitor : public IFCCVisitor {
    antlrcpp::Any visitAxiom(IFCC::AxiomContext *context) override;

    antlrcpp::Any visitGlobalItem(IFCC::GlobalItemContext *context) override;

    antlrcpp::Any visitFunction(IFCC::FunctionContext *context) override;

    antlrcpp::Any visitInstruction(IFCC::InstructionContext *context) override;

    antlrcpp::Any visitAction(IFCC::ActionContext *context) override;

    antlrcpp::Any visitStatement(IFCC::StatementContext *context) override;

    antlrcpp::Any visitBlock(IFCC::BlockContext *context) override;

    antlrcpp::Any visitDeclarationEmpty(IFCC::DeclarationEmptyContext *context) override;

    antlrcpp::Any visitDeclarationAffectation(IFCC::DeclarationAffectationContext *context) override;

    antlrcpp::Any visitDeclarationMulti(IFCC::DeclarationMultiContext *context) override;

    antlrcpp::Any visitType(IFCC::TypeContext *context) override;

    antlrcpp::Any visitAffectation(IFCC::AffectationContext *context) override;

    antlrcpp::Any visitIfStmt(IFCC::IfStmtContext *context) override;

    antlrcpp::Any visitReturnAct(IFCC::ReturnActContext *context) override;

    antlrcpp::Any visitIdentifier(IFCC::IdentifierContext *context) override;

    antlrcpp::Any visitConst(IFCC::ConstContext *context) override;

    antlrcpp::Any visitOperationBinary(IFCC::OperationBinaryContext *context) override;

    antlrcpp::Any visitParenthesis(IFCC::ParenthesisContext *context) override;

    antlrcpp::Any visitOperationUnary(IFCC::OperationUnaryContext *context) override;

};
