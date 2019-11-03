#ifndef PROJ1_PUSHI_H
#define PROJ1_PUSHI_H


#include "ByteCode.h"

class Pushi : public ByteCode{
    public:
        static void execute();
};

void Pushi::execute() {
    int i  = int((unsigned char)(Buffer::buffer[Buffer::pc+1]) << 24 |
            (unsigned char)(Buffer::buffer[Buffer::pc+2]) << 16 |
            (unsigned char)(Buffer::buffer[Buffer::pc+3]) << 8 |
            (unsigned char)(Buffer::buffer[Buffer::pc+4]));
    Stack::stackVect[++Stack::sp] = i;
    Buffer::pc += 4;
}


#endif //PROJ1_PUSHI_H
