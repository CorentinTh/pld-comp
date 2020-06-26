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

string ASSM::registerToRegister(string regA, string regB) {
    return "movl " + regA + ", " + regB;
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

string ASSM::operation(string regLeft, string op, string regRight, string regOut) {
    string out;

    string keyword;
    if (op == "*") keyword = "imull ";
    if (op == "/") keyword = "idiv ";
    if (op == "+") keyword = "addl ";
    if (op == "-") keyword = "subl ";

    if(op != "/") {
        string regSource = regRight;
        string regDest = regLeft;

        if(regOut == regSource) {
            regSource = regLeft;
            regDest = regRight;
        }

        out = string(keyword).append(regSource).append(", ").append(regDest).append("\n");

        if(regRight != regOut) {
            out.append(ASSM::INDENT).append(registerToRegister(regDest, regOut)).append("\n");
        }
    } else {
        if(regLeft != ASSM::REGISTER_A) {
            out.append(ASSM::registerToRegister(ASSM::REGISTER_A, ASSM::REGISTER_D)).append("\n").append(ASSM::INDENT)
                .append(ASSM::registerToRegister(ASSM::REGISTER_B, ASSM::REGISTER_A)).append("\n").append(ASSM::INDENT)
                .append(ASSM::registerToRegister(ASSM::REGISTER_D, REGISTER_B)).append("\n").append(ASSM::INDENT);
        }

        out.append(ASSM::constToRegister("0", ASSM::REGISTER_D)).append("\n").append(ASSM::INDENT);
        out.append(keyword).append(regRight).append("\n");

        if(regOut != ASSM::REGISTER_A) {
            out.append(ASSM::INDENT).append(registerToRegister(ASSM::REGISTER_A, regOut)).append("\n");
        }
    }

    return out;
}
