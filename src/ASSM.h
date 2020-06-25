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
    static const string REGISTER_A_L;
    static const string REGISTER_A_H;
    static const string REGISTER_B;
    static const string REGISTER_B_L;
    static const string REGISTER_B_H;
    static const string REGISTER_C;
    static const string REGISTER_C_L;
    static const string REGISTER_C_H;
    static const string REGISTER_D;
    static const string REGISTER_D_L;
    static const string REGISTER_D_H;
    static const string REGISTER_RETURN;
    static const string INDENT;

    static string registerToRegister(const string& regA, const string& regB);

    static string constToRegister(const string& number, const string& reg);

    static string addrToRegister(const string& address, const string& reg);

    static string registerToAddr(const string& reg, const string& address);

    static string constToAddr(const string& number, const string& address);

    static string addrRegister(const string& address);

    static string constRegister(const string& number);

    static string operation(const string& regLeft, const string& op, const string& regRight);

    static string getRegisterL(const string& reg);

    static string generateBooleanOperation(const string &keyword, const string &regLeft, const string &regRight);

    static string operation(string regLeft, string op, string regRight, string regOut);
};


#endif //PLD_COMP_ASSM_H
