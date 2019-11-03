#ifndef PROJ1_CALL_H
#define PROJ1_CALL_H


#include <datastructs/Stack.h>
#include "ByteCode.h"
#include "FrameStack.h"

class call : public ByteCode{
    public:
        static void execute(){
            FrameStack::fpsp += 1;
            int i = Stack::sp - Stack::stackVect[Stack::sp].iVal - 1;
            FrameStack::FrameVect.push_back(i);
            Stack::sp--;
            Buffer::pc = Stack::stackVect[Stack::sp--].iVal - 1;
        };
};


#endif //PROJ1_CALL_H
