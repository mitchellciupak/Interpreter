#include "MemoryObject.h"
#include "ByteCode.h"
#include "Value.h"
#include "Halt.h"
#include "ECE30862-InterpreterProject/codes/Pushc.h"
#include "ECE30862-InterpreterProject/codes/Printf.h"

#include <iostream>
#include <sys/stat.h>
#include <fstream.h>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    /*Initialize the interpreter*/
        //Create a Stack
            int pc = 0; //program counter (address of next instruction)
            //TODO 1
            //  -Stack * rstack = new rStack(); //runtime stack
            int rsp = -1; //runtime stack pointer
            //TODO 2
            //  -Stack * fpstack = new Stack(); //stack of frame pointers
            int fpsp = -1; //frame pointer stack pointer (points to the top of the frame stack)

    /*Read in File*/
        //Open File
            ifstream inFile;
            inFile.open(agrv[1], ios::in |ios::binary|ios::ate);
        //Read File
            inFile.seekg(0,ios::end);
            int length = inFile.tellg();

            MemoryObject * mem = new MemoryObject(); //Program memory (holds the array of bytes to be read into the interpreter)
        //Close File
            inFile.close();
}