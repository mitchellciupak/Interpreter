//
// Created by Colin Cassens on 2019-10-19.
//

#include "pokef.h"

void pokef::execute() {
    rstack[fpstack[fpsp] +rstack[sp]+1] = rstack[fpstack[fpsp] + rstack[sp-1]+1];
}