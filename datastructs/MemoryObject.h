#ifndef C_PROJ_MEMORYOBJECT_H
#define C_PROJ_MEMORYOBJECT_H

#include "stdio.h"
#include <iostream>
using namespace std;

class MemoryObject {
    MemoryObject() {
//        this->bytecodeChar = calloc(size, sizeof())
    }
    public:
        char * bytecodeChar;
        void execute();
        void getChar(char& buffer);
        void getShort();
        void getInt();
        void getFloat();
};

//std::ostream& operator<<(std::ostream& os, const Set& set) {
//    int n=0;
//    //First element
//    while(n < set.len){
//        if(set.Vector[0] == 1) {
//            break;
//        }
//        if(set.Vector[n] == 1) {
//            n++;
//            break;
//        }
//        n++;
//    }
//    cout << n;
//    while(n < set.len){
//        if(set.Vector[n] == 1){
//            n++;
//            cout << ", ";
//            cout << n;
//        }
//        else {
//            n++;
//        }
//    }
//    cout << endl;
//    return os;
//}


#endif //C_PROJ_MEMORYOBJECT_H
