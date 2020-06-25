
#include "AST.h"
#include "ASSM.h"
#include "Logger.h"
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
// Finally, we handle the current node

// TODO: simplify this by pushing the specific logic of ASTValue and ASTIdentifier dedicated toAST method (use a new "regOut" argument)
string ASTExpr::toASM() {
    string result;

    // All left nodes browsing
    if (this->left != nullptr) {
        if (this->left->type != EXPR) {
            result.append(ASSM::INDENT)
                .append(ASSM::registerToRegister(this->left->toASM(), ASSM::REGISTER_A))
                .append("\n");
        } else {
            result.append(this->left->toASM());
        }

        // If the right member is an expression we need to stash the register A to avoid it be deleted by the
        // expression calculation
        if(this->right->type == EXPR) {
            result.append(ASSM::INDENT)
                    .append(ASSM::registerToRegister(ASSM::REGISTER_A, ASSM::REGISTER_C))
                    .append("\n");
        }
    }

    // All right nodes browsing
    if (this->right != nullptr) {
        if (this->right->type != EXPR) {
            result.append(ASSM::INDENT)
                .append(ASSM::registerToRegister(this->right->toASM(), ASSM::REGISTER_B))
                .append("\n");
        } else {
            result.append(this->right->toASM());

            // As the right member is an expression, the register A as been deleted by the expression calculation
            // We need to restore it's value to the previously stashed value present in register C
            result.append(ASSM::INDENT)
                    .append(ASSM::registerToRegister(ASSM::REGISTER_C, ASSM::REGISTER_A))
                    .append("\n");
        }
    }

    // Handle current node
    bool isRootNode = this->parent == nullptr;
    bool isLeftExpr = false;

    if (!isRootNode) {
        ASTExpr *parentExpr = (ASTExpr *) this->parent;
        isLeftExpr = parentExpr->left == this;
    }

    // If we are a left expression from our parent, put the result in register A
    // If we are a right expression from our parent, put the result in register B
    string outputReg = isRootNode || isLeftExpr ? ASSM::REGISTER_A : ASSM::REGISTER_B;
    result.append(ASSM::INDENT).append(ASSM::operation(ASSM::REGISTER_A, this->op, ASSM::REGISTER_B, outputReg));

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
    return ASSM::constRegister(this->value);
}

string ASTIdentifier::toASM() {
    VariableManager *variableManager = VariableManager::getInstance();
    string variableName = this->identifier;
    if (!variableManager->variableExists(variableName)) {
        Logger::error("Variable " + variableName + " is not defined");
        exit(EXIT_FAILURE);
    }
    string variableAddress = variableManager->getAddress(variableName);
    return ASSM::addrRegister(variableAddress);
}


