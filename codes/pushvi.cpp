//
// Created by Colin Cassens on 2019-10-19.
//

#include "pushvi.h"

void pushvi::execute() {
    rstack[sp] = rstack[rstack[sp]];
}