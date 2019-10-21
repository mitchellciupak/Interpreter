#include "main.h"

using namespace std;

int main(int argc, char * argv[]) {
    /*Initialize the interpreter*/
    //Create a Stack
    int pc = 0; //program counter (address of next instruction)
    Stack * rstack; //runtime stack
    int rsp = -1; //runtime stack pointer
    Stack * fpstack; //stack of frame pointers
    int fpsp = -1; //frame pointer stack pointer (points to the top of the frame stack)

    /*Read in File*/
    //Open File
    ifstream inFile;
    inFile.open(argv[1], ios::in |ios::binary|ios::ate);
    //Read File
    if(inFile.is_open()){
        while(inFile.eof()){
            char buffer[1] = {};
            inFile.read(buffer,1);
            cout <<"buffer:"<< buffer;
        }
        MemoryObject * mem = new MemoryObject(); //Program memory (holds the array of bytes to be read into the interpreter)
    }
    //Close File
    inFile.close();
}