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

#ifndef PLD_COMP_TAGMANAGER_H
#define PLD_COMP_TAGMANAGER_H


#include <string>

class TagManager {

public:
    static std::string generateTag() {
        static int index = 0;

        return ".label" + std::to_string(index++);
    }
};


#endif //PLD_COMP_TAGMANAGER_H
