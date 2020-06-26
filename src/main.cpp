#include <iostream>
#include <cstdlib>

#include "antlr4-runtime.h"
#include "antlr/IFCCLexer.h"
#include "antlr/IFCCParser.h"
#include "CompVisitor.h"

using namespace antlr4;
using namespace std;

string helpMessage = "A compiler for a subset of the C language using C++ and Antlr4.\n"
                           "Usage : {@} <inputFileName> <option> [<args>]\n"
                           "Commandes\n"
                           "\t-h, --help\n\t\tshow this message\n"
                           "\t-o\n\t\tspecifie a file to write the output\n";

const string noInputFile = "No input file";
const string badInputFile = "Bad input file";

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

char* getCommandOption(char ** begin, char ** end, const std::string & option) {
    char ** itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) {
        return *itr;
    }
    return 0;
}

bool commandOptionExists(char ** begin, char ** end, const std::string & option) {
    return std::find(begin, end, option) != end;
}

int main(int argn, char * argv[]) {
    stringstream in;
    if (argn < 2) {
        cerr << noInputFile << endl;
        return 1;
    } else if (commandOptionExists(argv, argv + argn, "-h") || commandOptionExists(argv, argv + argn, "--help")) {
        string toReplace("{@}");
        size_t pos = helpMessage.find(toReplace);
        cout << helpMessage.replace(pos, toReplace.length(), argv[0]) << endl;
    } else {
        ifstream lecture(argv[1]);
        if (!lecture.is_open()) {
            cerr << badInputFile << endl;
            return 1;
        }
        in << lecture.rdbuf();

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
        string assembly = visitor.visit(tree).as<string>();

        char * outFileName = getCommandOption(argv, argv + argn, "-o");

        if (outFileName) {
            std::ofstream out(outFileName);
            out << assembly << endl;
            out.close();
        } else {
            cout << assembly << endl;
        }
    }

    return 0;
}
