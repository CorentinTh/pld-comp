//
// Created by bmarsaud on 10/06/2020.
//

#include "ASSM.h"

const string ASSM::BASE_POINTER = "%rbp";
const string ASSM::REGISTER_A = "%eax";
const string ASSM::REGISTER_B = "%ebx";
const string ASSM::REGISTER_C = "%ecx";
const string ASSM::REGISTER_D = "%edx";
const string ASSM::REGISTER_RETURN = ASSM::REGISTER_A;

// Put into register

string ASSM::registerToRegister(string regA, string regB) {
    return "movl {" + regA + ", " + regB + "}";
}

string ASSM::constToRegister(string number, string reg) {
    return registerToRegister(constRegister(number), reg);
}

string ASSM::addrToRegister(string address, string reg) {
    return registerToRegister(addrRegister(address), reg);
}

// Put into address

string ASSM::registerToAddr(string reg, string address) {
    return registerToRegister(reg, addrRegister(address));
}

string ASSM::constToAddr(string number, string address) {
    return registerToRegister(constRegister(number), addrRegister(address));
}

// Registers name translation

string ASSM::addrRegister(string address) {
    return "-" + address + "(" + ASSM::BASE_POINTER + ")";
}

string ASSM::constRegister(string number) {
    return "$" + number;
}