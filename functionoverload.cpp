#include <iostream>
using namespace std;

//function overload take 2 
void    printNumber(int x)
{
    cout << "i am printing an integer" << endl;
}

void printNumber(float x){
    cout << "now I am print a float " << endl;
}

int main()
{
    int a = 54;
    float b = 32.423423;

    printNumber(a);
    printNumber(b);
}

//function overload function overload function overload function overload