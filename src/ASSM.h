//
// Created by bmarsaud on 10/06/2020.
//

#ifndef PLD_COMP_ASSM_H
#define PLD_COMP_ASSM_H

#include <string>

using namespace std;

class ASSM {
public:
    static const string BASE_POINTER;
    static const string REGISTER_A;
    static const string REGISTER_B;
    static const string REGISTER_C;
    static const string REGISTER_D;
    static const string REGISTER_RETURN;
    static const string INDENT;

    string registerToRegister(string regA, string regB);
    string constToRegister(string number, string reg);
    string addrToRegister(string address, string reg);

    string registerToAddr(string reg, string address);
    string constToAddr(string number, string address);
    string addrRegister(string address);
    string constRegister(string number);

};


#endif //PLD_COMP_ASSM_H
