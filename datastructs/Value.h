#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H

//#include "main.h"

#include "MemoryObject.h"

enum types {c,s,i,f}; //character, short, int, float

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

        char cVal;
        short sVal;
        int iVal;
        float fVal;
};


#endif //C_PROJ_VALUE_H
