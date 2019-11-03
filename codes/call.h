#ifndef PROJ1_CALL_H
#define PROJ1_CALL_H


#include <datastructs/Stack.h>
#include "ByteCode.h"
#include "FrameStack.h"

class call : public ByteCode{
    public:
        static void execute(){
            FrameStack::FrameVect[++FrameStack::fpsp] = Stack::sp - Stack::stackVect[Stack::sp].iVal - 1;
            Stack::sp--;
            Buffer::pc = Stack::stackVect[Stack::sp--].iVal;
        };
};


#endif //PROJ1_CALL_H
