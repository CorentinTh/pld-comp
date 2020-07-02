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