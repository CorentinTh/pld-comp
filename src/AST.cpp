
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

    if(this->left != nullptr) {
        if(this->left->type != EXPR) {
            result.append(assm.registerToRegister(this->left->toASM(), ASSM::REGISTER_A)).append("\n");
        } else {
            result.append(this->left->toASM());
        }
    }

    if(this->right != nullptr) {
        if(this->right->type != EXPR) {
            result.append(assm.registerToRegister(this->right->toASM(), ASSM::REGISTER_B)).append("\n");
        } else {
            result.append(this->right->toASM());
        }
    }

    if(this->type == EXPR) {
        bool isRootNode = this->parent == nullptr;
        bool isLeftExpr = false;
        if(!isRootNode) {
            ASTExpr * parentExpr = (ASTExpr *) this->parent;
            isLeftExpr = parentExpr->left == this;
        }

        string outputReg = isRootNode || isLeftExpr ? ASSM::REGISTER_A : ASSM::REGISTER_B;

        if(this->left->type == EXPR) {
            result.append(ASSM::INDENT).append(assm.registerToRegister(ASSM::REGISTER_D, ASSM::REGISTER_A)).append("\n");
        }

        if(this->op == "*"){
            // TODO: put imull in assm class
            result.append(ASSM::INDENT).append("imull ").append(ASSM::REGISTER_B).append(", ").append(outputReg).append("\n");
        }else if(this->op == "+"){
            // TODO: put addl in assm class
            result.append(ASSM::INDENT).append("addl ").append(ASSM::REGISTER_B).append(", ").append(outputReg).append("\n");
        }else if(this->op == "-"){
            // TODO: put subl in assm class
            result.append(ASSM::INDENT).append("subl ").append(ASSM::REGISTER_B).append(", ").append(outputReg).append("\n");
        }else if(this->op == "/"){
            // TODO: put idivl in assm class
            result.append(ASSM::INDENT).append("idivl ").append(ASSM::REGISTER_B).append(", ").append(outputReg).append("\n");
        }

        if(isLeftExpr && !isRootNode) {
            result.append(ASSM::INDENT).append(assm.registerToRegister(ASSM::REGISTER_A, ASSM::REGISTER_D)).append("\n");
        }
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


