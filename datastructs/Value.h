#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H

//#include "main.h"
#include "MemoryObject.h"

class Value : public MemoryObject {
    //valueTag enum {char, short, int, float, error};
    public:
        char getChar();
        short getShort();
        int getInt();
        float getFloat();
};


#endif //C_PROJ_VALUE_H
