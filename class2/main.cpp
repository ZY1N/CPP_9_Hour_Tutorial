#include <iostream>
#include "sally.h"
using namespace std;

int main()
{
    Sally so;
    Sally *sallypointer = &so;


    so.printCrap();

    sallypointer->printCrap();
}