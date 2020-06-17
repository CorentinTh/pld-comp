
#include "AST.h"
#include "ASSM.h"
#include "VariableManager.h"

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

string ASTExpr::toASM() {
    ASSM assm;
    string result;

    if(this->left->type != EXPR){
        result.append(assm.registerToRegister(this->left->toASM(), ASSM::REGISTER_A)).append("\n");
    }else{
        result.append(this->left->toASM());
    }

    if(this->right->type != EXPR){
        if(this->op == "*"){
            result.append("imull {").append(this->right->toASM()).append(", %eax}\n");
        }
    }else{
        result.append(this->right->toASM());
    }


    return result;
}

string ASTExpr::printASM() {
    ASSM assm;
    string out = assm.registerToRegister(this->left->toASM(), ASSM::REGISTER_A);
    return out;
}

string ASTExpr::getMostLeftRegister() {
    if (typeid(this->left) != typeid(ASTExpr)) {
        return this->left->toASM();
    } else {
        return ((ASTExpr *) this->left)->getMostLeftRegister();
    }
}

string ASTValue::toASM() {
    ASSM assm;
    return assm.constRegister(this->value);
}

string ASTIdentifier::toASM() {
    ASSM assm;
    VariableManager variableManager = VariableManager::getInstance();
    //TODO check existance
    string variableAddress = variableManager.getAddress(this->identifier);
    return assm.addrRegister(variableAddress);
}
