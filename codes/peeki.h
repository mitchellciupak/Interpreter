#ifndef PROJ1_PEEKI_H
#define PROJ1_PEEKI_H


#include "ByteCode.h"

class peeki: public ByteCode{
    public:
        static void execute();
};

void peeki::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal + 1].iVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}


#endif //PROJ1_PEEKI_H
