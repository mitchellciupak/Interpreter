//
// Created by Colin Cassens on 2019-10-19.
//

#include "mul.h"

void mul::execute() {
    rstack[sp-1] = rstack[sp-1] * rstack[sp];
    sp--;
}