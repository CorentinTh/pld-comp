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

#include "AST.h"
#include "ASSM.h"
#include "VariableManager.h"
#include "TmpVariable.h"

// tmp1 = 2*2
// tmp2 = tmp1-8
// tmp3 = tmp2+9
//      []
//      |
//      *
//     / \
//   -     +
//  / \   / \
// 3   4 5   6
//


pair<string, string> ASTExpr::toASM() {
    string result;
    string tmpVariable = TmpVariable::getVariable();

    if (this->type == EXPR) {
        pair<string, string> leftPair = this->left->toASM();
        pair<string, string> rightPair = this->right->toASM();
        string leftVar = leftPair.first;
        string leftASM = leftPair.second;
        string rightVar = rightPair.first;
        string rightASM = rightPair.second;

        result.append(leftASM);
        result.append(rightASM);

        result.append(ASSM::operation(leftVar, this->op, rightVar, tmpVariable));

    } else {
        tmpVariable = this->toASM().first;
    }

    pair<string, string> out(tmpVariable, result);

    return out;
}

ASTExpr::ASTExpr() {
    this->type = EXPR;
}

ASTValue::ASTValue() {
    this->type = VALUE;
}

ASTIdentifier::ASTIdentifier() {
    this->type = IDENTIFIER;
}

ASTFunction::ASTFunction() {
    this->type = FUNCTION;
}

pair<string, string> ASTValue::toASM() {
    string tmpVariable = TmpVariable::getVariable();
    string result = string(ASSM::INDENT).append(ASSM::constToRegister(this->value, tmpVariable).append("\n"));
    pair<string, string> out(tmpVariable, result);

    return out;
}

pair<string, string> ASTIdentifier::toASM() {
    VariableManager *variableManager = VariableManager::getInstance();
    string baseVariableName = this->identifier;
    string prefix = variableManager->generatePrefix();
    string variableName = prefix.append(baseVariableName);

    string variableAddress = ASSM::addrRegister(variableManager->getAddress(variableName));

    pair<string, string> out(variableAddress, "\r");
    return out;
}

pair<string, string> ASTFunction::toASM() {
    string tmpVariable = TmpVariable::getVariable();
    string result = this->assm;
    string resultAddress = string(ASSM::INDENT).append(
            ASSM::registerToRegister(ASSM::REGISTER_RETURN, tmpVariable).append("\n"));
    result.append(resultAddress);

    pair<string, string> out(tmpVariable, result);
    return out;
}