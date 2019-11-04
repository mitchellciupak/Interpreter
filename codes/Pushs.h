//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef PROJ1_PUSHS_H
#define PROJ1_PUSHS_H


#include "ByteCode.h"
#include <vector>

class Pushs : public ByteCode{
    public:
        static void execute();
};

void Pushs::execute() {
    short s  = short((unsigned char)(Buffer::buffer[Buffer::pc+1]) |
            (unsigned char)(Buffer::buffer[Buffer::pc+2]) << 8);
    Stack::sp += 1;
    Value v = s;
    Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp, 1, v);
    Buffer::pc += 2;
}


#endif //PROJ1_PUSHS_H
