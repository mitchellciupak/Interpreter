#include "Set.h"
#include <iostream>
using namespace std;


Set::Set(int i):len(i), Vector(i,0), copyCount(0) {}
Set::Set(const Set& s) {
    this->len = s.len;
    this->copyCount = s.copyCount;
    this->Vector = s.Vector;
    this->copyCount = copyCount + 1;
}
int Set::getCopyCount(){
    return this->copyCount;
}

Set& Set::operator+(int add) {
    Vector[add - 1] = 1; //TRUE
    return *this;
}
Set& Set::operator-(int sub) {
    Vector[sub - 1] = 0; //False
    return *this;
}
Set& Set::operator&(const Set& andSet) {
    int n=0;
    while(n < this->len){
        this->Vector[n] = andSet.Vector[n];
        n++;
    }
    return *this;
}
Set& Set::operator/(const Set& subtSet) {
    int n=0;
    while(n < this->len){
        if(this->Vector[n] == subtSet.Vector[n]){
            this->Vector[n] = 0;
        }
        n++;
    }
    return *this;
}
Set& Set::operator~(){
    int n=0;
    while(n < this->len){
        if(this->Vector[n] == 1){
            this->Vector[n] = 0;
        }
        else {
            this->Vector[n] = 1;
        }
        n++;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Set& set) {
    int n=0;
    //First element
    while(n < set.len){
        if(set.Vector[0] == 1) {
            break;
        }
        if(set.Vector[n] == 1) {
            n++;
            break;
        }
        n++;
    }
    cout << n;
    while(n < set.len){
        if(set.Vector[n] == 1){
            n++;
            cout << ", ";
            cout << n;
        }
        else {
            n++;
        }
    }
    cout << endl;
    return os;
}