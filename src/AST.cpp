
#include "AST.h"

// tmp1 = 2*2
// tmp2 = tmp1-8
// tmp3 = tmp2+9

string ASTExpr::toASM() {
    string result;

    result.append(this->left->toASM());
    result.append(this->op);
    result.append(this->right->toASM());

    return result;
}

string ASTValue::toASM() {
    return this->value;
}

string ASTIdentifier::toASM() {
    return this->identifier;
}
