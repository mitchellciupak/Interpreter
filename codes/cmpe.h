#ifndef PROJ1_CMPE_H
#define PROJ1_CMPE_H


#include "ByteCode.h"

class cmpe : public ByteCode{
    public:
       static void execute(){
           Stack::stackVect[Stack::sp - 1] = (Stack::stackVect[Stack::sp - 1] == Stack::stackVect[Stack::sp]);
           Stack::sp--;
       };
};


#endif //PROJ1_CMPE_H
