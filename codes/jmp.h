#ifndef PROJ1_JMP_H
#define PROJ1_JMP_H


#include <datastructs/Stack.h>
#include "ByteCode.h"

class jmp : public ByteCode{
    public:
        static void execute(){
            Value v = Stack::stackVect[Stack::sp];
            int val;
            if(v.tag == 0){
                val = (int)v.cVal;
            }else if(v.tag == 1){
                val = (int)v.sVal;
            }else if(v.tag == 2){
                val = (int)v.iVal;
            }else if(v.tag == 3){
                val = (int)v.fVal;
            }
            Buffer::pc = val;
            Stack::sp--;
        };
};


#endif //PROJ1_JMP_H
