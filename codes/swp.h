#ifndef PROJ1_SWP_H
#define PROJ1_SWP_H


#include "ByteCode.h"

class swp : public ByteCode{
    public:
        static void execute();
};

void swp::execute() {
    Value v1 = Stack::stackVect[Stack::sp -1];
    Value v2 = Stack::stackVect[Stack::sp];
    Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp, 1, v1);
    Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp -1 , 1, v2);
}


#endif //PROJ1_SWP_H
