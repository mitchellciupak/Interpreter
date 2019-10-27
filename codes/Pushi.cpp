//
// Created by Colin Cassens on 2019-10-19.
//

#include "Pushi.h"

void Pushi::execute() {
    int i = mem[pc+1, mem[pc+2], mem[pc+3], mem[pc+4]];
    rstack[++sp] = i;
    pc += 5;
}