//
// Created by Colin Cassens on 11/3/19.
//

#ifndef C___PROJ_FRAMESTACK_H
#define C___PROJ_FRAMESTACK_H


class FrameStack {
public:
    static std::vector<int> FrameVect;    //Creates the stack vector as a static vector of value objects
    static int fpsp;
};

std::vector<int> FrameStack::FrameVect;
int FrameStack::fpsp;

#endif //C___PROJ_FRAMESTACK_H
