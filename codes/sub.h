#ifndef PROJ1_SUB_H
#define PROJ1_SUB_H


#include "ByteCode.h"
#include "Stack.h"


class sub : public ByteCode{
    public:
        static void execute();
};

void sub::execute() {
    //Add first two items on runtime stack and push result to stack
    Stack::stackVect[Stack::sp - 1] = Stack::stackVect[Stack::sp - 1] - Stack::stackVect[Stack::sp];
    Stack::sp -= 1;
}


#endif //PROJ1_SUB_H
