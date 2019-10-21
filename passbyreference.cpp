#include <iostream>
using namespace std;

void    passByValue(int x)
{
    x = 99;    
}

void    passByReference(int *x)
{
    *x = 66;
}

int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << betty << endl;
    cout << sandy << endl;
}