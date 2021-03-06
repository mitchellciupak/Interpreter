#ifndef PROJ1_SUB_H
#define PROJ1_SUB_H

#include "ByteCode.h"
#include "Stack.h"


class sub : public ByteCode{
    public:
        static void execute();
};

void sub::execute() {
    //Sub first two items on runtime stack and push result to stack

    Value v = Stack::stackVect[Stack::sp - 1];
    switch(v.tag) //enum valueTag is {c,s,i,f,e}
    {
        case 0:
            Stack::stackVect[Stack::sp - 1].cVal = Stack::stackVect[Stack::sp - 1].cVal - Stack::stackVect[Stack::sp].cVal;
            break;
        case 1:
            Stack::stackVect[Stack::sp - 1].sVal = Stack::stackVect[Stack::sp - 1].sVal - Stack::stackVect[Stack::sp].sVal;
            break;
        case 2:
            Stack::stackVect[Stack::sp - 1].iVal = Stack::stackVect[Stack::sp - 1].iVal - Stack::stackVect[Stack::sp].iVal;
            break;
        case 3:
            Stack::stackVect[Stack::sp - 1].fVal = Stack::stackVect[Stack::sp - 1].fVal - Stack::stackVect[Stack::sp].fVal;
            break;
        default:
            break;
    }

    Stack::sp -= 1;
}


#endif //PROJ1_SUB_H
