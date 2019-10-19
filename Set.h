#include <iostream>
#include <vector> //a C++ STL
//#include <sets> //a C++ STL

using namespace std;

class Set { //Set of positive integers
public:
    //Constructor
    Set(int i);
    Set(const Set& s);

    //Functions
    Set& operator+(int add);
    Set& operator-(int sub);
    Set &operator&(const Set& andSet);
    Set& operator~();
    Set& operator/(const Set& subtSet);
    int getCopyCount();
    //Variables
    vector<int> Vector;
    int len;
    int copyCount;
};

std::ostream& operator<<(std::ostream& os, const Set& set);