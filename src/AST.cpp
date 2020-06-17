
#include "AST.h"
#include "ASSM.h"
#include "VariableManager.h"

// tmp1 = 2*2
// tmp2 = tmp1-8
// tmp3 = tmp2+9


string ASTExpr::toASM() {
    ASSM assm;
    string result;

    if(typeid(this->left) != typeid(ASTExpr)){
        result.append(assm.registerToRegister(this->left->toASM(), ASSM::REGISTER_A)).append("\n");
    }else{
        result.append(this->left->toASM());
    }

    if(typeid(this->right) != typeid(ASTExpr)){
        if(this->op == "*"){
            result.append("imull {").append(this->right->toASM()).append(", %eax}\n");
        }
    }else{
        result.append(this->right->toASM());
    }


    return result;
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
