
#ifndef PLD_COMP_AST_H
#define PLD_COMP_AST_H


#include <string>
#include <memory>
#include <iostream>
#include <antlr/IFCCParser.h>

using namespace std;

//   []
//   |
//   *
//  / \
// 2   +
//    / \
//   5   6


// tmp1 = 5 + 6
// tmp2 = tmp1 * 2

struct AST;

enum NodeType {
    VALUE,
    EXPR,
    IDENTIFIER,
    FUNCTION
};

class ASTNode {
public:
    ASTNode() {
        this->parent = nullptr;
    }

    NodeType type = static_cast<NodeType>(-1);
    ASTNode *parent;

    virtual pair<string, string> toASM() = 0;
};

class ASTExpr : ASTNode {
public :
    ASTExpr();

    ASTNode *left{};
    ASTNode *right{};
    string op;

    pair<string, string> toASM() override;
};

class ASTValue : ASTNode {
public :
    ASTValue();

    string value;

    pair<string, string> toASM() override;
};

class ASTIdentifier : ASTNode {
public :

    ASTIdentifier();

    string identifier;

    pair<string, string> toASM() override;
};

class ASTFunction : ASTNode {
public:
    ASTFunction();

    string assm;

    string toASM() override;
};

#endif //PLD_COMP_AST_H
