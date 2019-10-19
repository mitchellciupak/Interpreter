//
// Created by Colin Cassens on 2019-10-19.
//

#include "pushvf.h"

void pushvf::execute() {
    rstack[sp] = rstack[rstack[sp]];
}