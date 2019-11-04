#ifndef PROJ1_CMPE_H
#define PROJ1_CMPE_H


#include "ByteCode.h"

class cmpe : public ByteCode{
    public:
       static void execute(){
           Value v = (Stack::stackVect[Stack::sp - 1] == Stack::stackVect[Stack::sp]);
           Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp - 1, 1, v);
           Stack::sp--;
       };
};


#endif //PROJ1_CMPE_H
