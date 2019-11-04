#ifndef C_PROJ_HALT_H
#define C_PROJ_HALT_H


#include "ByteCode.h"
#include "Stack.h"
#include "FrameStack.h"

class Halt : public ByteCode{
    public:
        static void print();
};

void Halt::print() {
     std::cout  << "\nCompile Values:\nPC: " << Buffer::pc << std::endl;

     std::cout << "sp: " << Stack::sp << std::endl;
     if(Stack::sp == -1){
         std::cout << "rstack: empty" << std::endl;
     }
     else {
         int i = 0;
         while(i < Stack::stackVect.size()) {
             std::cout << "rstack[" << i << "]:" << Stack::stackVect[i] << std::endl;
             i++;
         }
     }

    std::cout << "fpsp: " << FrameStack::fpsp << std::endl;
    if (FrameStack::fpsp == -1) {
         std::cout << "fpstack: empty" << std::endl;

     }
    else {
         int j = 0;
         while(j < Stack::stackVect.size()) {
             std::cout << "fpstack[" << j << "]: " << Stack::stackVect[j] << std::endl;
             j++;
         }
     }

}


#endif //C_PROJ_HALT_H
