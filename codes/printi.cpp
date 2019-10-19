//
// Created by Colin Cassens on 2019-10-19.
//

#include "printi.h"

void printi::execute() {
    System.out.println(rstack[sp--]);
}