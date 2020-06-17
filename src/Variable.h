//
// Created by Lucca Vidal on 6/15/20.
//

#ifndef PLD_COMP_VARIABLE_H
#define PLD_COMP_VARIABLE_H

#include <string>

using namespace std;

class Variable {
private:
    string type;

    string address;

    string name;

public:

    Variable(string type, string address, string name);

    string getType();

    void setType(string type);

    string getAddress();

    void setAddress(string address);

    string getName();

    void setName(string name);

};


#endif //PLD_COMP_VARIABLE_H
