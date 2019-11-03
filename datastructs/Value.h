#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H

//#include "main.h"

#include "MemoryObject.h"

enum types {c,s,i,f}; //character, short, int, float

class Value : public MemoryObject {
    enum valueTag {c,s,i,f,e};

    Value(char v){
        cVal = v;
        tag = c;
    }
    Value(short v){
        sVal = v;
        tag = s;
    }
    Value(int v){
        iVal = v;
        tag = i;
    }
    Value(float v){
        fVal = v;
        tag = f;
    }


public:
    float valHolder;
    valueTag tag;
    char cVal;
    short sVal;
    int iVal;
    float fVal;

    Value& operator=(char v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(short v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(int v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(float v){
        Value * newv = new Value(v);
        return *newv;
    }

};


#endif //C_PROJ_VALUE_H
