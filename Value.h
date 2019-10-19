//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H


class Value : public MemoryObject {
    //valueTag enum {char, short, int, float, error};
    char getChar();
    short getShort();
    int getInt();
    float getFloat();
};


#endif //C_PROJ_VALUE_H
