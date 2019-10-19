//
// Created by Colin Cassens on 2019-10-19.
//

#include "jmpc.h"

void jmpc::execute() {
    if (rstack[sp-1]) pc = rstack[sp]
    sp = sp-2;
}