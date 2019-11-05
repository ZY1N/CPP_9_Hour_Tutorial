#include "sally.h"
#include <iostream>
using namespace std;

//constructor and deconstructor cant take values
// no param no return value no overloading

Sally::Sally()
{
    cout << "i am construcotr" << endl;
}

void Sally::printCrap(){
    cout << "did someone say steam" << endl;
}

Sally::~Sally()
{
    cout << "i am the deconstrocr" << endl;
}