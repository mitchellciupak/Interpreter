#ifndef PROJ1_PUSHVF_H
#define PROJ1_PUSHVF_H


#include "ByteCode.h"

class pushvf : public ByteCode{
    public:
        static void execute();
};

//Not sure that this is how its done, could be right

void pushvf::execute() {
    Stack::stackVect[Stack::sp] = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].fVal + 1];
}


#endif //PROJ1_PUSHVF_H
