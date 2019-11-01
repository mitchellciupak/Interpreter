#ifndef C_PROJ_PUSHC_H
#define C_PROJ_PUSHC_H


#include <datastructs/Stack.h>
#include "ByteCode.h"

class Pushc : public ByteCode{
    public:
        static void execute();
};

void Pushc::execute() {
    char c = Buffer::buffer[Buffer::pc+1];
    Stack::stackVect[++Stack::sp] = c;
    Buffer::pc += 2;
}


#endif //C_PROJ_PUSHC_H
