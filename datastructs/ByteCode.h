#ifndef C_PROJ_BYTECODE_H
#define C_PROJ_BYTECODE_H

#include "MemoryObject.h"

class ByteCode : public MemoryObject {
    virtual void execute() =0;
};

#endif //C_PROJ_BYTECODE_H
