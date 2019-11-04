#ifndef PROJ1_POKES_H
#define PROJ1_POKES_H

#include "ByteCode.h"

class pokes : public ByteCode{
    public:
        static void execute();
};

void pokes::execute() {
    Value v = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp - 1].iVal + 1].sVal;
    int ind = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal + 1;
    Stack::stackVect.insert(Stack::stackVect.begin() + ind, 1, v);

}


#endif //PROJ1_POKES_H
