//
// Created by Colin Cassens on 2019-10-19.
//

#include "popv.h"

void popv::execute() {
    rstack[rstack[sp]] = rstack[sp-1];
    sp -= 2;
}