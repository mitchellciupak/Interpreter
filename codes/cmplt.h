#ifndef PROJ1_CMPLT_H
#define PROJ1_CMPLT_H


#include "ByteCode.h"

class cmplt : public ByteCode{
    public:
        static void execute(){
            Stack::stackVect[Stack::sp-1] = Stack::stackVect[Stack::sp-1] < Stack::stackVect[Stack::sp];
            Stack::sp--;
        };
};



#endif //PROJ1_CMPLT_H
