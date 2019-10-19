//
// Created by Colin Cassens on 2019-10-19.
//

#include "prints.h"

void prints::execute() {
    System.out.println(rstack[sp--]);
}