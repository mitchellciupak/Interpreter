#ifndef C_PROJ_BYTECODE_H
#define C_PROJ_BYTECODE_H

#include "MemoryObject.h"

class ByteCode : public MemoryObject {
    virtual void execute();
};

#endif //C_PROJ_BYTECODE_H
