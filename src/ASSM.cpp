//
// Created by bmarsaud on 10/06/2020.
//

#include "ASSM.h"

const string ASSM::BASE_POINTER = "%rbp";
const string ASSM::REGISTER_A = "%eax";
const string ASSM::REGISTER_A_L = "%al";
const string ASSM::REGISTER_A_H = "%ah";
const string ASSM::REGISTER_B = "%ebx";
const string ASSM::REGISTER_B_L = "%bl";
const string ASSM::REGISTER_B_H = "%bh";
const string ASSM::REGISTER_C = "%ecx";
const string ASSM::REGISTER_C_L = "%cl";
const string ASSM::REGISTER_C_H = "%ch";
const string ASSM::REGISTER_D = "%edx";
const string ASSM::REGISTER_D_L = "%dl";
const string ASSM::REGISTER_D_H = "%dh";
const string ASSM::REGISTER_RETURN = ASSM::REGISTER_A;
const string ASSM::INDENT = "  ";

// Put into register

string ASSM::registerToRegister(const string &regA, const string &regB) {
    return "movl " + regA + ", " + regB;
}

string ASSM::constToRegister(const string &number, const string &reg) {
    return registerToRegister(constRegister(number), reg);
}

string ASSM::addrToRegister(const string &address, const string &reg) {
    return registerToRegister(addrRegister(address), reg);
}

// Put into address

string ASSM::registerToAddr(const string &reg, const string &address) {
    return registerToRegister(reg, addrRegister(address));
}

string ASSM::constToAddr(const string &number, const string &address) {
    return registerToRegister(constRegister(number), addrRegister(address));
}

// Registers name translation

string ASSM::addrRegister(const string &address) {
    return "-" + address + "(" + ASSM::BASE_POINTER + ")";
}

string ASSM::constRegister(const string &number) {
    return "$" + number;
}

string ASSM::operation(const string &regLeft, const string &op, const string &regRight) {
    string result;

    if (op == "*") return string(INDENT).append("imull ").append(regLeft).append(", ").append(regRight).append("\n");
    if (op == "/") return string(INDENT).append("idivl ").append(regLeft).append(", ").append(regRight).append("\n");
    if (op == "+") return string(INDENT).append("addl ").append(regLeft).append(", ").append(regRight).append("\n");
    if (op == "-") return string(INDENT).append("subl ").append(regLeft).append(", ").append(regRight).append("\n");
    if (op == ">") return ASSM::generateBooleanOperation("setg", regLeft, regRight);
    if (op == "<") return ASSM::generateBooleanOperation("setl", regLeft, regRight);
    if (op == ">=") return ASSM::generateBooleanOperation("setge", regLeft, regRight);
    if (op == "<=") return ASSM::generateBooleanOperation("setle", regLeft, regRight);
    if (op == "==") return ASSM::generateBooleanOperation("sete", regLeft, regRight);
    if (op == "!=") return ASSM::generateBooleanOperation("setne", regLeft, regRight);

    return result;
}

string ASSM::generateBooleanOperation(const string &keyword, const string &regLeft, const string &regRight) {
    string lRegRight = getRegisterL(regRight);
    return string(INDENT).append("cmpl ").append(regLeft).append(", ").append(regRight).append("\n")
            .append(INDENT).append(keyword).append(" ").append(lRegRight).append("\n")
            .append(INDENT).append("movzbl ").append(lRegRight).append(", ").append(regRight).append("\n");
}

string ASSM::operation(const string &op, const string &reg) {
    return std::string(op).append(reg);
}

string ASSM::getRegisterL(const string &reg) {
    if (reg == REGISTER_A) return REGISTER_A_L;
    if (reg == REGISTER_B) return REGISTER_B_L;
    if (reg == REGISTER_C) return REGISTER_C_L;
    if (reg == REGISTER_D) return REGISTER_D_L;

    return "";
}

//	cmpl	$1, -8(%rbp)
//	sete	%al
//	movzbl	%al, %eax