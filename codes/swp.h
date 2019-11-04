#ifndef PROJ1_SWP_H
#define PROJ1_SWP_H


#include "ByteCode.h"

class swp : public ByteCode{
    public:
        static void execute();
};

void swp::execute() {
    Value tmp = Stack::stackVect[Stack::sp -1];
    Stack::stackVect[Stack::sp -1] = Stack::stackVect[Stack::sp];
    Stack::stackVect[Stack::sp] = tmp;
}


#endif //PROJ1_SWP_H
