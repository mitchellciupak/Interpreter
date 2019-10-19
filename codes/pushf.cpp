//
// Created by Colin Cassens on 2019-10-19.
//

#include "pushf.h"

void pushf::execute() {
    float f = mem[pc+1, mem[pc+2], mem[pc+3], mem[pc+4]];
    rstack[++sp] = f;
    pc += 5;
}