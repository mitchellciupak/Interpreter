
#ifndef PROJ1_PUSHVC_H
#define PROJ1_PUSHVC_H


#include "ByteCode.h"

class pushvc : public ByteCode{
    public:
        static void execute();
};

//Not sure that this is how its done, could be right

void pushvc::execute() {
    Stack::stackVect[Stack::sp] = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].cVal + 1];
}


#endif //PROJ1_PUSHVC_H
