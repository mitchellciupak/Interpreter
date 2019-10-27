//
// Created by Colin Cassens on 2019-10-19.
//

#include "popv.h"

void popv::execute() {
    rstack[fpstack[fpsp]+rstack[sp]+1] = rstack[sp-1]
    sp -= 2
}