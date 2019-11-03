#ifndef PROJ1_POPM_H
#define PROJ1_POPM_H

#include "ByteCode.h"

/*Description*/
//pop multiple entries off of the runtime stack, discarding their values. The number of entries
//to pop is at the top of the runtime stack.

class popm : public ByteCode{
    public:
        static void execute();
};

void popm::execute() {
    Value v = Stack::stackVect[Stack::sp - 1];
    switch(v.tag) //enum valueTag is {c,s,i,f,e}
    {
        case 0:
            Stack::sp -= Stack::stackVect[Stack::sp].cVal + 1;
            break;
        case 1:
            Stack::sp -= Stack::stackVect[Stack::sp].sVal + 1;
            break;
        case 2:
            Stack::sp -= Stack::stackVect[Stack::sp].iVal + 1;
            break;
        case 3:
            Stack::sp -= (int)Stack::stackVect[Stack::sp].fVal + 1;
            break;
        default:
            break;
    }
}


#endif //PROJ1_POPM_H
