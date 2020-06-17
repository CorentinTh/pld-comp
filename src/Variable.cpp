//
// Created by Lucca Vidal on 6/15/20.
//

#include "Variable.h"

Variable::Variable(string type, string address, string name) {
    this->type = type;
    this->address = address;
    this->name = name;
}

string Variable::getType() {
    return this->type;
}

void Variable::setType(string t) {
    this->type = t;
}

string Variable::getAddress() {
    return this->address;
}

void Variable::setAddress(string a) {
    this->address = a;
}

string Variable::getName() {
    return this->name;
}

void Variable::setName(string n) {
    this->name = n;
}