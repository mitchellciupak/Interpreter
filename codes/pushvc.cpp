//
// Created by Colin Cassens on 2019-10-19.
//

#include "pushvc.h"

void pushvc::execute() {
    rstack[sp] = rstack[rstack[sp]];
}