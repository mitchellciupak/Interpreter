//
// Created by Colin Cassens on 2019-10-19.
//

#include "peeki.h"

void peeki::execute(){
    rstack[fpstack[fpsp] + rstack[sp-1]+1] = rstack[fpstack[fpsp] +rstack[sp]+1];
}