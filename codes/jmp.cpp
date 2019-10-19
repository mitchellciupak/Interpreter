//
// Created by Colin Cassens on 2019-10-19.
//

#include "jmp.h"

void jmp::execute() {
    pc = rstack[sp];
    sp = sp-1;
}