//
// Created by Colin Cassens on 2019-10-19.
//

#include "swp.h"

void swp::execute() {
    rstack[sp-1] = rstack[sp];
    rstack[sp] = tmp;
}