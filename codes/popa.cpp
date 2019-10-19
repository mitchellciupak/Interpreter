//
// Created by Colin Cassens on 2019-10-19.
//

#include "popa.h"

void popa::execute() {
    for(int i=1; i<=rstack[sp];i++){
        rstack[fpstack[fpsp] + i] = rstack[sp – rstack[sp] + i - 1];
    }
    sp = fpstack[fpsp]+rstack[sp];
}