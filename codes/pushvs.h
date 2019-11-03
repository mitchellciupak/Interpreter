#ifndef PROJ1_PUSHVS_H
#define PROJ1_PUSHVS_H


#include "ByteCode.h"

class pushvs : public ByteCode{
    public:
        static void execute();
};

//Not sure that this is how its done, could be right
void pushvs::execute() {
    Stack::stackVect[Stack::sp] = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].sVal + 1];
}


#endif //PROJ1_PUSHVS_H
