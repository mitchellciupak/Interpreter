#ifndef PROJ1_DIV_H
#define PROJ1_DIV_H


#include "ByteCode.h"
#include "Stack.h"


class div : public ByteCode{
    public:
        static void execute();
};

void div::execute() {
    //Add first two items on runtime stack and push result to stack
    Stack::stackVect[Stack::sp - 1] = Stack::stackVect[Stack::sp - 1] / Stack::stackVect[Stack::sp];
    Stack::sp -= 1;
}



#endif //PROJ1_DIV_H
