#ifndef PROJ1_PRINTS_H
#define PROJ1_PRINTS_H


#include "ByteCode.h"

class prints : public ByteCode{
    public:
        static void execute();
};

void prints::execute() {
    Value v = Stack::stackVect[Stack::sp--];
    std::cout << v << std::endl;
}


#endif //PROJ1_PRINTS_H
