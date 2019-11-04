#ifndef PROJ1_POPA_H
#define PROJ1_POPA_H

#include "ByteCode.h"

/*Description*/
//pop all of the top entries to frame stack point from the runtime stack but keep val top entries.
//The number of entries to keep is at the top of the runtime stack.
//rstack[fpstack[fpsp] + 1] = rstack[sp – rstack[sp]]


class popa : public ByteCode{
    public:
        static void execute();
};

void popa::execute() {
    int count = Stack::stackVect[Stack::sp].iVal;
    Value v = Stack::stackVect[Stack::sp];
    for(int i = 1; i<=count; i++){
        v = Stack::stackVect[Stack::sp - Stack::stackVect[Stack::sp].iVal + i - 1];
        Stack::stackVect.insert(Stack::stackVect.begin() + FrameStack::FrameVect[FrameStack::fpsp] + i, 1, v);
    }
    Stack::sp = FrameStack::FrameVect[FrameStack::fpsp] + Stack::stackVect[Stack::sp].iVal;
}


#endif //PROJ1_POPA_H
