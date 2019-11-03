//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef PROJ1_CMPGT_H
#define PROJ1_CMPGT_H


#include "ByteCode.h"

class cmpgt : public ByteCode{
    public:
        static void execute(){
            Stack::stackVect[Stack::sp-1] = Stack::stackVect[Stack::sp-1] > Stack::stackVect[Stack::sp];
            Stack::sp--;
        };
};



#endif //PROJ1_CMPGT_H
