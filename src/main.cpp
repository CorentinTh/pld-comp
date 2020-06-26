#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "antlr4-runtime.h"
#include "antlr/IFCCLexer.h"
#include "antlr/IFCCParser.h"
#include "antlr/IFCCParserBaseVisitor.h"
#include "CompVisitor.h"

using namespace antlr4;
using namespace std;

class MyErrorListener : public BaseErrorListener {
public:
    MyErrorListener() { error = false; }
    bool Error() { return error; }
    virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)  {
        cout << "Error on position " << line << ":" << charPositionInLine << endl;
        error = true;
    }

protected:
    bool error;
};

int main(int argn, const char **argv) {
    stringstream in;
    if(argn == 2) {
        ifstream lecture(argv[1]);
        in << lecture.rdbuf();
    }

    ANTLRInputStream input(in.str());
    IFCCLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

    IFCCParser parser(&tokens);

    MyErrorListener errorlistener;
    parser.removeErrorListeners();
    parser.addErrorListener(&errorlistener);

    tree::ParseTree* tree = parser.axiom();
    if(errorlistener.Error()) {
        return 1;
    }

    CompVisitor visitor;
    cout << visitor.visit(tree).as<string>() << endl;

    return 0;
}
