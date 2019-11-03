#ifndef PROJ1_POPA_H
#define PROJ1_POPA_H

#include "ByteCode.h"

/*Description*/
//pop all of the top entries to frame stack point from the runtime stack but keep val top entries.
//The number of entries to keep is at the top of the runtime stack.


class popa : public ByteCode{
    public:
        static void execute();
};

void popa::execute() {
//    rstack[fpstack[fpsp] + 1] = rstack[sp – rstack[sp]]
//    rstack[fpstack[fpsp] + 2] = rstack[sp – rstack[sp]+1]
//    . . .
//    rstack[fpstack[fpsp] + rstack[sp]] = rstack[sp-1]
//    sp = fpstack[fpsp]+rstack[sp]



}


#endif //PROJ1_POPA_H
