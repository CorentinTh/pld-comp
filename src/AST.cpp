
#include "AST.h"
#include "ASSM.h"
#include "Logger.h"
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

// The graph browsing algorithm is post-order
// First, we browse all the left nodes
// Next, we browse all the right nodes
// Finally, we handle the current node

// TODO: simplify this by pushing the specific logic of ASTValue and ASTIdentifier dedicated toAST method (use a new "regOut" argument)
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

        result.append(ASSM::operation(leftVar, this->op, rightVar, tmpVariable)).append("\n");

        TmpVariable::free(leftVar);
        TmpVariable::free(rightVar);
    } else {
        tmpVariable = this->toASM().first;
    }


//    if(this->type == EXPR){
//        result.append(ASSM::operation(ASSM::REGISTER_A, this->op, ASSM::REGISTER_B, ASSM::REGISTER_C)).append("\n");
//        result.append(ASSM::registerToRegister(ASSM::REGISTER_C, ASSM::REGISTER_B)).append("\n");
//    }else{
//        result.append(ASSM::registerToRegister(this->right->toASM(), ASSM::REGISTER_B)).append("\n");
//    }
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

pair<string, string> ASTValue::toASM() {
    string tmpVariable = TmpVariable::getVariable();
    string result = ASSM::constToRegister(this->value, tmpVariable).append("\n");
    pair<string, string> out(tmpVariable, result);

    return out;
}

pair<string, string> ASTIdentifier::toASM() {
    VariableManager *variableManager = VariableManager::getInstance();
    //TODO check existence with function identifier
    string baseVariableName = this->identifier;
    string prefix = variableManager->generatePrefix();
    string variableName = prefix.append(baseVariableName);

    string variableAddress = ASSM::addrRegister(variableManager->getAddress(variableName));

    pair<string, string> out(variableAddress, "");
    return out;
}


