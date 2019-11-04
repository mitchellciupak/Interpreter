#ifndef C_PROJ_PRINTF_H
#define C_PROJ_PRINTF_H


#include "ByteCode.h"

class Printf : public ByteCode{
    public:
        static void execute();

};

void Printf::execute() {
    Value v = Stack::stackVect[Stack::sp--];
    std::cout << v << std::endl;
}


#endif //C_PROJ_PRINTF_H
