//
// Created by Colin Cassens on 2019-10-19.
//

#include "Printf.h"

void Printf::execute() {
    System.out.println(rstack[sp--]);
}