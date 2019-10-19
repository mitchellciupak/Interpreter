//
// Created by Colin Cassens on 2019-10-19.
//

#include "sub.h"

void sub::execute() {
    rstack[sp-1] = rstack[sp-1] - rstack[sp] sp--;
}