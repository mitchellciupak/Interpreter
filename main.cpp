#include "main.h"

using namespace std;

//Functions
void chooseCode(unsigned char buffer);

int main(int argc, char * argv[]) {
    /*Initialize the interpreter*/
    //Create a Stack
    Stack * rstack; //runtime stack
    int rsp = -1; //runtime stack pointer
    Stack * fpstack; //stack of frame pointers
    int fpsp = -1; //frame pointer stack pointer (points to the top of the frame stack)

    //Open and Read File
    ifstream inFile(argv[1], ios::in |ios::binary);//|ios::ate);;
    std::vector<unsigned char> buffer1(std::istreambuf_iterator<char>(inFile), {});

    Buffer::buffer = buffer1;

    //read through the file:
    for(Buffer::pc = 0; Buffer::pc < Buffer::buffer.size(); Buffer::pc++){
        chooseCode(buffer1[Buffer::pc]);
    }

    //Close File
    inFile.close();

    /*Initialize Stack*/
}

void chooseCode(unsigned char buffer) {
    if (buffer == (char) 0) {
        Halt::print();
        std::exit(EXIT_SUCCESS);
    }

    if (int(buffer) >  99) {
        if (int(buffer) < 120) { //arithmetic byte codes
            switch (buffer) {
                case 100:
                    add::execute();
                    break;
                case 104:
                    sub::execute();
                    break;
                case 108:
                    mul::execute();
                    break;
                case 112:
                    div::execute();
                    break;
                default :
                    cout << "Invalid" << endl;
            }
        } else if (int(buffer) < 141) { //comparison bytecodes
            switch (buffer) {
                case 132:
                    cmpe::execute();
                    break;
                case 136:
                    cmplt::execute();
                    break;
                case 140:
                    cmpgt::execute();
                    break;
                default :
                    cout << "Invalid" << endl;
            }
        } else { //special op codes
            switch (buffer) {
                case 144:
                    printc::execute();
                    break;
                case 145:
                    prints::execute();
                    break;
                case 146:
                    printi::execute();
                    break;
                case 147:
                    Printf::execute();
                    break;
                default :
                    cout << "Invalid" << endl;
            }
        }
    } else if (int(buffer) < 50) { //Control flow bytecodes
        switch (buffer) {
            case 36:
                jmp::execute();
                break;
            case 40:
                jmpc::execute();
                break;
            case 44:
                call::execute();
                break;
            case 48:
                ret::execute();
                break;
            default :
                cout << "Invalid" << endl;
        }
    } else { //stack manipulation byte codes
        switch (buffer) {
            case 68:
                Pushc::execute();
                break;
            case 69:
                Pushs::execute();
                break;
            case 70:
                Pushi::execute();
                break;
            case 71:
                pushf::execute();
                break;
            case 72:
                pushvc::execute();
                break;
            case 73:
                pushvs::execute();
                break;
            case 74:
                pushvi::execute();
                break;
            case 75:
                pushvf::execute();
                break;
            case 76:
                popm::execute();
                break;
            case 77:
                popa::execute();
                break;
            case 80:
                popv::execute();
                break;
            case 84:
                peekc::execute();
                break;
            case 85:
                peeks::execute();
                break;
            case 86:
                peeki::execute();
                break;
            case 87:
                peekf::execute();
                break;
            case 88:
                pokec::execute();
                break;
            case 89:
                pokes::execute();
                break;
            case 90:
                pokei::execute();
                break;
            case 91:
                pokef::execute();
                break;
            case 94:
                swp::execute();
                break;
            default :
                cout << "Invalid" << endl;
        }
    }
}
