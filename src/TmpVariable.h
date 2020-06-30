//
// Created by corentin on 30/06/2020.
//

#ifndef PLD_COMP_TMPVARIABLE_H
#define PLD_COMP_TMPVARIABLE_H


#include <ostream>
#include "VariableManager.h"
#include "ASSM.h"


class TmpVariable {
public:
    static string getVariable(){
        VariableManager *variableManager = VariableManager::getInstance();

        string address =  ASSM::addrRegister(variableManager->getNextAddress());
        string id = "-tmp-" + address;
        variableManager->putVariableAtAddress(id, address);

        return address;
    }

    static void free(string address){
        VariableManager *variableManager = VariableManager::getInstance();

        string id = "-tmp-" + address;

        variableManager->removeVariable(id);
    }

};


#endif //PLD_COMP_TMPVARIABLE_H
