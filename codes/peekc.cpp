//
// Created by Colin Cassens on 2019-10-19.
//

#include "peekc.h"

void peekc::execute() {
    rstack[fpstack[fpsp] + rstack[sp-1]+1] = rstack[fpstack[fpsp] +rstack[sp]+1];
}