//
// Created by corentin on 25/06/2020.
//

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
