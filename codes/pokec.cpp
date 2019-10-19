//
// Created by Colin Cassens on 2019-10-19.
//

#include "pokec.h"

void pokec::execute() {
    rstack[fpstack[fpsp] +rstack[sp]+1] = rstack[fpstack[fpsp] + rstack[sp-1]+1];
}