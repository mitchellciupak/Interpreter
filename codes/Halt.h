#ifndef C_PROJ_HALT_H
#define C_PROJ_HALT_H


#include "ByteCode.h"

class Halt : public ByteCode{
    public:
        static void execute();
        static void print();
};


#endif //C_PROJ_HALT_H
