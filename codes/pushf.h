#ifndef PROJ1_PUSHF_H
#define PROJ1_PUSHF_H


#include "ByteCode.h"

class pushf : public ByteCode{
public:
    static void execute(){
        float f = float((unsigned char)(Buffer::buffer[Buffer::pc+1]) |
                                           (unsigned char)(Buffer::buffer[Buffer::pc+2]) << 8 |
                                           (unsigned char)(Buffer::buffer[Buffer::pc+3]) << 16 |
                                           (unsigned char)(Buffer::buffer[Buffer::pc+4]) << 24);

        unsigned char temp[] = {Buffer::buffer[Buffer::pc + 1],Buffer::buffer[Buffer::pc + 2],Buffer::buffer[Buffer::pc + 3],Buffer::buffer[Buffer::pc + 4]};
        memcpy(&f, &temp, sizeof(f));
        ++Stack::sp;
        Value v = (float)f;
        Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp, 1, v);
        Buffer::pc += 4;
    };
};


#endif //PROJ1_PUSHF_H
