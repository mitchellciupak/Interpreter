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
    //Open File ((ifstream name).unsetf(std::ios::skipws); )

    ifstream inFile(argv[1], ios::in |ios::binary);//|ios::ate);;
    //inFile.open(argv[1], ios::in |ios::binary|ios::ate);
    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(inFile), {});
    //Read File
    //Close File
    inFile.close();
}