
#ifndef PROJ1_PUSHVI_H
#define PROJ1_PUSHVI_H


#include "ByteCode.h"

class pushvi : public ByteCode{
    public:
        static void execute();
};

//Not sure that this is how its done, could be right

void pushvi::execute() {
    Stack::stackVect[Stack::sp] = Stack::stackVect[FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal + 1];
}


#endif //PROJ1_PUSHVI_H
