#ifndef PROJ1_PUSHI_H
#define PROJ1_PUSHI_H


#include "ByteCode.h"

class Pushi : public ByteCode{
    public:
        static void execute();
};

void Pushi::execute() {
    int i  = int((unsigned char)(Buffer::buffer[Buffer::pc+1]) |
            (unsigned char)(Buffer::buffer[Buffer::pc+2]) << 8 |
            (unsigned char)(Buffer::buffer[Buffer::pc+3]) << 16 |
            (unsigned char)(Buffer::buffer[Buffer::pc+4]) << 24);
    ++Stack::sp;
    Value v = i;
    Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp, 1, v);
    Buffer::pc += 4;
}


#endif //PROJ1_PUSHI_H
