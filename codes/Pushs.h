//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef PROJ1_PUSHS_H
#define PROJ1_PUSHS_H


#include "ByteCode.h"

class Pushs : public ByteCode{
    public:
        static void execute();
};

void Pushs::execute() {
    short s  = short((unsigned char)(Buffer::buffer[Buffer::pc+1] << 8 |
            (unsigned char)(Buffer::buffer[Buffer::pc+2])));
    ++Stack::sp;
    Value v = s;
    Stack::stackVect.push_back(v);
    Buffer::pc += 2;
}


#endif //PROJ1_PUSHS_H
