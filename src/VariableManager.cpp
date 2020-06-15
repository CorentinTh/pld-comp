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
    return to_string((variableAddressMap.size() + 1) * 4);
}

void VariableManager::putVariableAtAddress(string variableName, string variableAddress) {
    variableAddressMap.insert(pair<string, string>(variableName, variableAddress));
}