#ifndef PROJ1_PRINTI_H
#define PROJ1_PRINTI_H


#include "ByteCode.h"

class printi : public ByteCode{
    public:
        static void execute();
};

void printi::execute() {
    Value v = Stack::stackVect[Stack::sp--];
    std::cout << v << std::endl;
}


#endif //PROJ1_PRINTI_H
