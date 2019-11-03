//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef PROJ1_JMPC_H
#define PROJ1_JMPC_H


#include "ByteCode.h"

class jmpc : public ByteCode{
    public:
        static void execute();
};

void jmpc::execute() {
    if(Stack::stackVect[Stack::sp -1].tag){
        Buffer::pc = Stack::stackVect[Stack::sp].iVal;
    }
    Stack::sp -= 2;
}


#endif //PROJ1_JMPC_H
