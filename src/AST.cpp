
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
            // TODO: put imull in assm class
            result.append(ASSM::INDENT).append("imull ").append(this->right->toASM()).append(", %eax\n");
        }else if(this->op == "+"){
            // TODO: put addl in assm class
            result.append(ASSM::INDENT).append("addl ").append(this->right->toASM()).append(", %eax\n");
        }else if(this->op == "-"){
            // TODO: put subl in assm class
            result.append(ASSM::INDENT).append("subl ").append(this->right->toASM()).append(", %eax\n");
        }else if(this->op == "/"){
            // TODO: put idivl in assm class
            result.append(ASSM::INDENT).append("idivl ").append(this->right->toASM()).append(", %eax\n");
        }
    }else{
        result.append(this->right->toASM());
    }


    return result;
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

string ASTValue::toASM() {
    ASSM assm;
    return assm.constRegister(this->value);
}

string ASTIdentifier::toASM() {
    ASSM assm;
    VariableManager* variableManager = VariableManager::getInstance();
    //TODO check existance
    string variableAddress = variableManager->getAddress(this->identifier);
    return assm.addrRegister(variableAddress);
}


