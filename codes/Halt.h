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

    // Print empty if a stack is empty.
    if(Stack::sp == -1) {
        std::cout << "Empty" << std::endl;
    } else { //Print pc, sp, rstack, fpsp, fpstack.
        std::cout << "pc:" << Buffer::pc << std::endl;
        std::cout << "sp:" << Stack::sp << std::endl;

        int i = 0;
        std::cout << "rstack:" << std::endl;
        while(i < Stack::stackVect.size()) {
            std::cout << "rstack[" << i << "]:" << Stack::stackVect[i] << std::endl;
            i++;
        }

        std::cout << "fpstack" << std::endl;
        std::cout << "fpsp:" << FrameStack::fpsp << std::endl;
        while(i < Stack::stackVect.size()) {
            std::cout << "fpstack[" << i << "]: " << Stack::stackVect[i] << std::endl;
            i++;
        }
    }
}


#endif //C_PROJ_HALT_H
