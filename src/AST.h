
#ifndef PLD_COMP_AST_H
#define PLD_COMP_AST_H


#include <string>
#include <memory>
#include <iostream>

using namespace std;

//   []
//   |
//   *
//  / \
// 2   +
//    / \
//   5   6
//

// tmp1 = 5 + 6
// tmp2 = tmp1 * 2

struct AST;

enum NodeType {
    EXPR,
    VALUE,
    IDENTIFIER
};

class ASTNode {
public:
    const NodeType type;

    virtual string toASM() = 0;
};

class ASTExpr : ASTNode {
public :
    ASTExpr() = default;

    const NodeType type = EXPR;

    ASTNode *left;
    ASTNode *right;
    string op;

    string toASM() override;

    string printASM();

    string getMostLeftRegister();
};

class ASTValue : ASTNode {
public :
    ASTValue() = default;

    const NodeType type = VALUE;
    string value;

    string toASM() override;
};

class ASTIdentifier : ASTNode {
public :
    ASTIdentifier() = default;

    const NodeType type = IDENTIFIER;

    string identifier;

    string toASM() override;
};

#endif //PLD_COMP_AST_H
