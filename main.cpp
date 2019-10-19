#include "MemoryObject.h"
#include "ByteCode.h"
#include "Value.h"
#include "Halt.h"
#include "ECE30862-InterpreterProject/codes/Pushc.h"
#include "ECE30862-InterpreterProject/codes/Printf.h"

#include <iostream>
#include <sys/stat.h>

using namespace std;

int main(int argc, char * argv[]) {
    /*Initialize the interpreter*/
        //Create a Stack
            int pc = 0; //program counter (address of next instruction)
            //TODO 1
            //  -Stack * rStack = new rStack(); //runtime stack
            int rSP = -1; //runtime stack pointer
            //TODO 2
            //  -Stack * fpstack = new Stack(); //stack of frame pointers
            int fpsp = -1; //frame pointer stack pointer (points to the top of the frame stack)
            //TODO 3
            // -MemoryObject * mem = new MemoryObject(); //Program memory (holds the array of bytes to be read into the interpreter)

}