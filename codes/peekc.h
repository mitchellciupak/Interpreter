#ifndef PROJ1_PEEKC_H
#define PROJ1_PEEKC_H


#include "ByteCode.h"

class peekc : public ByteCode{
    public:
        static void execute();
};

void peekc::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].cVal + 1].cVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}


#endif //PROJ1_PEEKC_H
