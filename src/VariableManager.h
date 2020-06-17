//
// Created by Lucca Vidal on 6/15/20.
//

#ifndef PLD_COMP_VARIABLEMANAGER_H
#define PLD_COMP_VARIABLEMANAGER_H

#include <string>
#include <map>
using namespace std;

class VariableManager {
private:
    map<string, string> variableAddressMap;

public:
    bool variableExists(string variableName);

    string getAddress(string variableName);

    string getNextAddress();

    void putVariableAtAddress(string variableName, string variableAddress);
};


#endif //PLD_COMP_VARIABLEMANAGER_H
