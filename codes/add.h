#ifndef PROJ1_ADD_H
#define PROJ1_ADD_H

#include "ByteCode.h"
#include "Stack.h"

class add : public ByteCode{
public:
    static void execute();
};

void add::execute() {
    //Add first two items on runtime stack and push result to stack
    Stack::stackVect[Stack::sp - 1] = Stack::stackVect[Stack::sp - 1] + Stack::stackVect[Stack::sp];
    Stack::sp -= 1;
}

#endif //PROJ1_ADD_H
