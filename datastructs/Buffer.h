//
// Created by Colin Cassens on 11/1/19.
//

#ifndef C___PROJ_BUFFER_H
#define C___PROJ_BUFFER_H

#include <stdlib.h>
#include <iostream>
#include <sys/stat.h>
#include <stdio.h>
#include <vector>


using namespace std;

class Buffer {
public:
    static std::vector<unsigned char> buffer;
    static int pc;
};

vector<unsigned char> Buffer::buffer;  //Define outside of a class
int Buffer::pc;



#endif //C___PROJ_BUFFER_H
