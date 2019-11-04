#ifndef PROJ1_POKEC_H
#define PROJ1_POKEC_H


#include "ByteCode.h"

class pokec : public ByteCode{
    public:
        static void execute();
};

void pokec::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1].cVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);
}


#endif //PROJ1_POKEC_H
