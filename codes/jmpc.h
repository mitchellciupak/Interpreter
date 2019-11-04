
#ifndef PROJ1_JMPC_H
#define PROJ1_JMPC_H


#include "ByteCode.h"

class jmpc : public ByteCode{
    public:
        static void execute();
};

void jmpc::execute() {
    if(Stack::stackVect[Stack::sp -1].iVal == 1 && Stack::stackVect[Stack::sp-1].tag == 2){
        Buffer::pc = Stack::stackVect[Stack::sp].iVal - 1;
    }
    Stack::sp -= 2;
}


#endif //PROJ1_JMPC_H
