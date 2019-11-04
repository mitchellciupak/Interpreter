#ifndef PROJ1_POKEF_H
#define PROJ1_POKEF_H


#include "ByteCode.h"

class pokef : public ByteCode{
    public:
        static void execute();
};

void pokef::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1].fVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}


#endif //PROJ1_POKEF_H
