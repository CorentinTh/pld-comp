//
// Created by Lucca Vidal on 6/15/20.
//

#ifndef PLD_COMP_VARIABLEMANAGER_H
#define PLD_COMP_VARIABLEMANAGER_H

#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class VariableManager {
private:
    map<string, string> variableAddressMap;

    vector<string> scopeStack;

    VariableManager() = default;

public:

    static VariableManager* &getInstance() {
        static VariableManager* instance = new VariableManager;
        return instance;
    }

    bool variableExists(string variableName);

    string getAddress(string variableName);

    string getNextAddress();

    void putVariableAtAddress(string variableName, string variableAddress);

    void pushScope(string scope);

    void popScope();

    string generatePrefix();

    int functionVariableAmount(string functionName);

    void removeVariable(const string &identifier);
};


#endif //PLD_COMP_VARIABLEMANAGER_H
