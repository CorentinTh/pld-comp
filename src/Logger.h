//
// Created by Lucca Vidal on 6/15/20.
//

#ifndef PLD_COMP_LOGGER_H
#define PLD_COMP_LOGGER_H
#define RED     "\033[31m"      /* Red */
#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"

#include <string>
#include <iostream>

using namespace std;

class Logger {
public:
    static void error(string error);

    static void warning(string warning);

    static void info(string info);
};


#endif //PLD_COMP_LOGGER_H
