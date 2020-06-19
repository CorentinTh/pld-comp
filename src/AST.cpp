
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

// The graph browsing algorithm is post-order
// First, we browse all the left nodes
// Next, we browse all the right nodes
// Finnaly, we handle the current node
string ASTExpr::toASM() {
    ASSM assm;
    string result;

    // All left nodes browsing
    if(this->left != nullptr) {
        if(this->left->type != EXPR) {
            result.append(assm.registerToRegister(this->left->toASM(), ASSM::REGISTER_A)).append("\n");
        } else {
            result.append(this->left->toASM());
        }
    }

    // All right nodes browsing
    if(this->right != nullptr) {
        if(this->right->type != EXPR) {
            result.append(assm.registerToRegister(this->right->toASM(), ASSM::REGISTER_B)).append("\n");
        } else {
            result.append(this->right->toASM());
        }
    }

    // Handle current node
    if(this->type == EXPR) {
        bool isRootNode = this->parent == nullptr;
        bool isLeftExpr = false;
        if(!isRootNode) {
            ASTExpr * parentExpr = (ASTExpr *) this->parent;
            isLeftExpr = parentExpr->left == this;
        }

        // If left branch put the result in register A, if right branch put the result in register B
        // If we are the root node put the result in register A for legacy integration
        string outputReg = isRootNode || isLeftExpr ? ASSM::REGISTER_A : ASSM::REGISTER_B;

        // If my left branch is an expression, an operation result has been stashed to register D
        if(this->left->type == EXPR) {
            // Pop operation result from register D to register A
            result.append(ASSM::INDENT).append(assm.registerToRegister(ASSM::REGISTER_D, ASSM::REGISTER_A)).append("\n");
        }

        result.append(ASSM::INDENT).append(assm.operation(ASSM::REGISTER_B, this->op, outputReg));

        // If I am a left expression I have to stash the operation result to register D to avoid its deletion by the right branch
        if(isLeftExpr && !isRootNode) {
            // Stash operation result from register A to register D
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


