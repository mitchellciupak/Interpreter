#ifndef PROJ1_POPV_H
#define PROJ1_POPV_H

#include "ByteCode.h"

/*Description*/
//pop a value off of the runtime stack into a variable. The variable’s location is given by the
//top of the stack, the value popped is the next element into the stack.

class popv : public ByteCode{
    public:
        static void execute();
};

void popv::execute() {
    //rstack[fpstack[fpsp]+rstack[sp]+1] = rstack[sp-1]

    int fpInd = FrameStack::FrameVect[FrameStack::fpsp];

    char rInd0 = Stack::stackVect[Stack::sp].cVal;
    short rInd1 = Stack::stackVect[Stack::sp].sVal;
    int rInd2 = Stack::stackVect[Stack::sp].iVal;
    float rInd3 = Stack::stackVect[Stack::sp].fVal;

    Value v = Stack::stackVect[Stack::sp - 1];

    switch(v.tag) //enum valueTag is {c,s,i,f,e}
    {
        case 0:
            Stack::stackVect[fpInd + rInd0 + 1].cVal = Stack::stackVect[Stack::sp - 1].cVal;
            break;
        case 1:
            Stack::stackVect[fpInd + rInd1 + 1].sVal = Stack::stackVect[Stack::sp - 1].sVal;
            break;
        case 2:
            Stack::stackVect[fpInd + rInd2 + 1].iVal = Stack::stackVect[Stack::sp - 1].iVal;
            break;
        case 3:
            Stack::stackVect[fpInd + (int)rInd3 + 1].fVal = Stack::stackVect[Stack::sp - 1].fVal;
            break;
        default:
            break;
    }

    Stack::sp -= 2;
}

#endif //PROJ1_POPV_H
