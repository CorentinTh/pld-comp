
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
    string toASM();
};

class ASTExpr : ASTNode {
public :
    ASTNode *left;
    ASTNode *right;
    string op;
};

class ASTValue : ASTNode {
public :
    string value;
};

class ASTIdentifier : ASTNode {
public :
    string identifier;
};


//void printAST(ASTNode *node) {
//
//    if (typeid(node) == typeid(ASTIdentifier *)) {
//        cout << ((ASTIdentifier *) node)->identifier;
//    } else if (typeid(node) == typeid(ASTValue *)) {
//        cout << ((ASTValue *) node)->value;
//    } else if (typeid(node) == typeid(ASTExpr *)) {
//        printAST(((ASTExpr *) node)->right);
//        cout << ((ASTExpr *) node)->op;
//        printAST(((ASTExpr *) node)->left);
//    }
//}

#endif //PLD_COMP_AST_H

//b = 42
//a = (b + 2) - 8
//
//b = 42
//tmp = b + 2
//a = tmp - 8
