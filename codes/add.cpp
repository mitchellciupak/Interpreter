//
// Created by Colin Cassens on 2019-10-19.
//

#include "add.h"

void add::execute() {
    rstack[sp-1] = rstack[sp-1] + rstack[sp];
    sp--;
}