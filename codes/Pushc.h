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
    ++Stack::sp;
    Value v = c;
    Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp, 1, v);
    Buffer::pc += 1;
}


#endif //C_PROJ_PUSHC_H
