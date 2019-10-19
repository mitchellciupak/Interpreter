//
// Created by Colin Cassens on 2019-10-19.
//

#include "Pushc.h"

void Pushc::execute() {
    rstack[++sp] = mem[pc+1];
    pc += 2;
}