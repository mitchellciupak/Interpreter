#ifndef PROJ1_MUL_H
#define PROJ1_MUL_H


#include "ByteCode.h"
#include "Stack.h"

using namespace std;

class mul : public ByteCode{
    public :
        static void execute();
};

void mul::execute() {
    //Add first two items on runtime stack and push result to stack
    Stack::stackVect[Stack::sp - 1].valHolder = Stack::stackVect[Stack::sp - 1].valHolder * Stack::stackVect[Stack::sp].valHolder;
    Stack::sp -= 1;
}

#endif //PROJ1_MUL_H
