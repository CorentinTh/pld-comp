//
// Created by Lucca Vidal on 6/15/20.
//

#include "VariableManager.h"

bool VariableManager::variableExists(string variableName) {
    return variableAddressMap.find(variableName) != variableAddressMap.end();
}

string VariableManager::getAddress(string variableName) {
    return variableAddressMap.find(variableName)->second;
}

string VariableManager::getNextAddress() {
    string functionName = scopeStack.back();

    int varAmount = 0;
    map<string, string>::iterator it;
    for(it = variableAddressMap.begin(); it != variableAddressMap.end(); it++) {
        if((*it).first.rfind(functionName, 0) == 0) {
            varAmount++;
        }
    }

    return to_string((varAmount + 1) * 4);
}

void VariableManager::putVariableAtAddress(string variableName, string variableAddress) {
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
}

void VariableManager::pushScope(string scope) {
    scopeStack.push_back(scope);
}

void VariableManager::popScope() {
    scopeStack.pop_back();
}

string VariableManager::generatePrefix() {
    string prefix = "";
    vector<string>::iterator it;
    for(it = scopeStack.begin(); it != scopeStack.end(); it++) {
        string currentScope = *it;
        prefix.append(currentScope+":");
    }
    if(scopeStack.size() != 1) {
        return prefix.substr(0, prefix.size()-1); //remove last _
    }
    return prefix;
}

int VariableManager::functionVariableAmount(string functionName) {
    int varAmount = 0;
    map<string, string>::iterator it;
    for(it = variableAddressMap.begin(); it != variableAddressMap.end(); it++) {
        if((*it).first.rfind(functionName, 0) == 0) {
            varAmount++;
        }
    }

    return varAmount;
}

void VariableManager::removeVariable(const string& identifier) {
    this->variableAddressMap.erase(identifier);
}
