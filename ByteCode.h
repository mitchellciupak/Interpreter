//
// Created by Colin Cassens on 2019-10-19.
//

#ifndef C_PROJ_BYTECODE_H
#define C_PROJ_BYTECODE_H


class ByteCode : public MemoryObject {
    virtual void execute();
};


#endif //C_PROJ_BYTECODE_H
