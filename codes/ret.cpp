//
// Created by Colin Cassens on 2019-10-19.
//

#include "ret.h"

void ret::execute() {
    sp = fpstack[fpsp--];
    pc = rstack[sp];
}