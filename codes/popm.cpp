//
// Created by Colin Cassens on 2019-10-19.
//

#include "popm.h"

void popm::execute() {
    sp -= rstack[sp] + 1;
}