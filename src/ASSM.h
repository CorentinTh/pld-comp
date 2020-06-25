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

    static string registerToRegister(string regA, string regB);

    static string constToRegister(string number, string reg);

    static string addrToRegister(string address, string reg);

    static string registerToAddr(string reg, string address);

    static string constToAddr(string number, string address);

    static string addrRegister(string address);

    static string constRegister(string number);

    static string operation(string regLeft, string op, string regRight, string regOut);
};


#endif //PLD_COMP_ASSM_H
