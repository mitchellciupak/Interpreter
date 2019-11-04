#ifndef PROJ1_CMPLT_H
#define PROJ1_CMPLT_H


#include "ByteCode.h"

class cmplt : public ByteCode{
    public:
        static void execute(){
            Value v = Stack::stackVect[Stack::sp-1] < Stack::stackVect[Stack::sp];
            Stack::stackVect.insert(Stack::stackVect.begin() + Stack::sp - 1, 1, v);
            Stack::sp--;
        };
};



#endif //PROJ1_CMPLT_H
