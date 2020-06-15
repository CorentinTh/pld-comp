//
// Created by Lucca Vidal on 6/15/20.
//

#include "Logger.h"

void Logger::error(string error) {
    cout << RED << "[ERROR] " << error << RESET << endl;
}

void Logger::warning(string warning) {
    cout << YELLOW << "[WARNING] " << warning << RESET << endl;
}

void Logger::info(string info) {
    cout << "[INFO] " << info << endl;
}