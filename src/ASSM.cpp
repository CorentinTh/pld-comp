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
const string ASSM::INDENT = "  ";

// Put into register

string ASSM::registerToRegister(const string& regA, const string& regB) {
    return "movl " + regA + ", " + regB;
}

string ASSM::constToRegister(const string& number, const string& reg) {
    return registerToRegister(constRegister(number), reg);
}

string ASSM::addrToRegister(const string& address, const string& reg) {
    return registerToRegister(addrRegister(address), reg);
}

// Put into address

string ASSM::registerToAddr(const string& reg, const string& address) {
    return registerToRegister(reg, addrRegister(address));
}

string ASSM::constToAddr(const string& number, const string& address) {
    return registerToRegister(constRegister(number), addrRegister(address));
}

// Registers name translation

string ASSM::addrRegister(const string& address) {
    return "-" + address + "(" + ASSM::BASE_POINTER + ")";
}

string ASSM::constRegister(const string& number) {
    return "$" + number;
}

string ASSM::operation(const string& regLeft, const string& op, const string& regRight) {
    string keyword;

    if (op == "*") keyword = "imull ";
    if (op == "/") keyword = "idivl ";
    if (op == "+") keyword = "addl ";
    if (op == "-") keyword = "subl ";

    return string(keyword).append(regLeft).append(", ").append(regRight).append("\n");
}

string ASSM::operation(const string& op, const string& reg) {
    return std::string(op).append(reg);
}
