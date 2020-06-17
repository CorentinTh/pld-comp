
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

class ASTNode {
public:
    virtual string toASM() = 0;
};

class ASTExpr : ASTNode {
public :
    ASTNode *left;
    ASTNode *right;
    string op;
    string toASM() override;
};

class ASTValue : ASTNode {
public :
    string value;
    string toASM() override;
};

class ASTIdentifier : ASTNode {
public :
    string identifier;
    string toASM() override;
};

#endif //PLD_COMP_AST_H
