#ifndef PROJ1_PRINTS_H
#define PROJ1_PRINTS_H


#include "ByteCode.h"

class prints : public ByteCode{
    public:
        static void execute();
};

void prints::execute() {
    Value v = Stack::stackVect[Stack::sp - 1];
    std::cout << v.sVal << std::endl;
}


#endif //PROJ1_PRINTS_H
