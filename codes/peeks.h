#ifndef PROJ1_PEEKS_H
#define PROJ1_PEEKS_H


#include "ByteCode.h"

class peeks : public ByteCode{
    public:
        static void execute();
};

void peeks::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].sVal + 1].sVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}


#endif //PROJ1_PEEKS_H
