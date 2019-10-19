//
// Created by Colin Cassens on 2019-10-19.
//

#include "pushvs.h"

void pushvs::execute() {
    rstack[sp] = rstack[rstack[sp]];
}