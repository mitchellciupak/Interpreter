#ifndef PROJ1_PRINTC_H
#define PROJ1_PRINTC_H


#include "ByteCode.h"

class printc : public ByteCode{
    public:
        static void execute();
};

void printc::execute() {
    Value v = Stack::stackVect[Stack::sp - 1];
    std::cout << v.cVal << std::endl;
}


#endif //PROJ1_PRINTC_H
