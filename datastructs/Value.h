#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H

//#include "main.h"
#include "MemoryObject.h"

class Value : public MemoryObject {
    enum valueTag { c , s , i , f , e };

    Value(char v){
        valHolder = (float)v;
        tag = c;
    }
    Value(short v){
        valHolder = (float)v;
        tag = s;
    }
    Value(int v){
        valHolder = (float)v;
        tag = i;
    }
    Value(float v){
        valHolder = v;
        tag = f;
    }

public:
    float valHolder;
    valueTag tag;
    char getChar();
    short getShort();
    int getInt();
    float getFloat();

};


#endif //C_PROJ_VALUE_H
