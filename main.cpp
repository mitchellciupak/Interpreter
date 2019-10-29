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

    //Open and Read File
    ifstream inFile(argv[1], ios::in |ios::binary);//|ios::ate);;
    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(inFile), {});

    //read through the file:
    for(pc = 0, pc < buffer.size(), pc++){
        if(buffer[pc] == 71){
            pushf.execute();
        }
    }

    //Close File
    inFile.close();

    /*Initialize Stack*/
}