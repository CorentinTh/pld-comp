/**
 *      PLD-COMP - INSA Lyon
 *           June 2020
 *
 *      - Balthazar Frolin
 *      - Bastien Marsaud
 *      - Marc Meillac
 *      - Corentin Thomasset
 *      - Lucca Paffi
 */

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
const string ASSM::INDENT = "\t";

string ASSM::registerToRegister(const string &regA, const string &regB) {
    return "movl " + regA + ", " + regB;
}

string ASSM::constToRegister(const string &number, const string &reg) {
    return registerToRegister(constRegister(number), reg);
}

string ASSM::addrToRegister(const string &address, const string &reg) {
    return registerToRegister(addrRegister(address), reg);
}

string ASSM::registerToAddr(const string &reg, const string &address) {
    return registerToRegister(reg, addrRegister(address));
}

string ASSM::constToAddr(const string &number, const string &address) {
    return registerToRegister(constRegister(number), addrRegister(address));
}

string ASSM::addrRegister(const string &address) {
    return "-" + address + "(" + ASSM::BASE_POINTER + ")";
}

string ASSM::constRegister(const string &number) {
    return "$" + number;
}

string ASSM::operation(string regLeft, string op, string regRight, string regOut) {
    string writableLeftReg = ASSM::REGISTER_D;
    string out = string(ASSM::INDENT).append(ASSM::registerToRegister(regLeft, writableLeftReg)).append("\n");

    if (op == "*")
        out.append(ASSM::INDENT).append("imull ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == "+")
        out.append(ASSM::INDENT).append("addl ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == "-")
        out.append(ASSM::INDENT).append("subl ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == "|")
        out.append(ASSM::INDENT).append("orl ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == "&")
        out.append(ASSM::INDENT).append("andl ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == "^")
        out.append(ASSM::INDENT).append("xorl ").append(regRight).append(", ").append(writableLeftReg).append("\n");
    else if (op == ">") out.append(ASSM::generateBooleanOperation("setg", regRight, writableLeftReg));
    else if (op == "<") out.append(ASSM::generateBooleanOperation("setl", regRight, writableLeftReg));
    else if (op == ">=") out.append(ASSM::generateBooleanOperation("setge", regRight, writableLeftReg));
    else if (op == "<=") out.append(ASSM::generateBooleanOperation("setle", regRight, writableLeftReg));
    else if (op == "==") out.append(ASSM::generateBooleanOperation("sete", regRight, writableLeftReg));
    else if (op == "!=") out.append(ASSM::generateBooleanOperation("setne", regRight, writableLeftReg));
    else if (op == "/" || op == "%") {
        if (regLeft != ASSM::REGISTER_A) {
            out.append(ASSM::INDENT).append(ASSM::registerToRegister(regLeft, ASSM::REGISTER_A)).append("\n");
        }
        if (regRight != ASSM::REGISTER_B) {
            out.append(ASSM::INDENT).append(ASSM::registerToRegister(regRight, ASSM::REGISTER_B)).append("\n");
        }
        out.append(ASSM::INDENT).append(ASSM::constToRegister("0", ASSM::REGISTER_D)).append("\n");
        out.append(ASSM::INDENT).append("idivl ").append(ASSM::REGISTER_B).append("\n");

        if (op == "/") {
            out.append(ASSM::INDENT).append(registerToRegister(ASSM::REGISTER_A, writableLeftReg)).append("\n");
        }
    }

    out.append(ASSM::INDENT).append(ASSM::registerToRegister(writableLeftReg, regOut)).append("\n");

    return out;
}

string ASSM::generateBooleanOperation(const string &keyword, const string &regLeft, const string &regRight) {
    string lRegRight = getRegisterL(regRight);
    return string(INDENT).append("cmpl ").append(regLeft).append(", ").append(regRight).append("\n")
            .append(INDENT).append(keyword).append(" ").append(lRegRight).append("\n")
            .append(INDENT).append("movzbl ").append(lRegRight).append(", ").append(regRight).append("\n");
}

string ASSM::getRegisterL(const string &reg) {
    if (reg == REGISTER_A) return REGISTER_A_L;
    if (reg == REGISTER_B) return REGISTER_B_L;
    if (reg == REGISTER_C) return REGISTER_C_L;
    if (reg == REGISTER_D) return REGISTER_D_L;

    return "";
}

string ASSM::registerToPushQ(const string &reg) {
    return string(INDENT).append("pushq ").append(ASSM::REGISTER_A).append("\n");
}

string ASSM::asmToPushQ(const string &assm) {
    return string(INDENT).append("pushq ").append(assm).append("\n");
}

