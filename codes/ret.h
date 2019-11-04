#ifndef PROJ1_RET_H
#define PROJ1_RET_H


#include "ByteCode.h"
#include "FrameStack.h"

class ret : public ByteCode{
    public:
        static void execute();
};

void ret::execute() {
    Stack::sp = FrameStack::FrameVect[FrameStack::fpsp--];
    Buffer::pc = Stack::stackVect[Stack::sp--].iVal - 1;
}


#endif //PROJ1_RET_H
