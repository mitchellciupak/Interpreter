//
// Created by Colin Cassens on 2019-10-19.
//

#include "printc.h"

void printc::execute() {
    System.out.println(rstack[sp--]);
}