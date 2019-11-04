#ifndef PROJ1_PEEKF_H
#define PROJ1_PEEKF_H


#include "ByteCode.h"

class peekf : public ByteCode{
    public:
        static void execute();
};

void peekf::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + (int)Stack::stackVect[Stack::sp].fVal + 1].sVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + (int)Stack::stackVect[Stack::sp - 1].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}

#endif //PROJ1_PEEKF_H
