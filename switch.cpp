#include <iostream>
#include <cmath>
using namespace std;

int     main()
{
    int age = 2;

    switch(age)
    {
        case 16:
            cout << "hey you can drive now" << endl;
            break;
        case 18:
            cout << "bye some lott" << endl;
            break;
        case 21:
            cout << "buy me some beer" << endl;
            break;
        default:
            cout << "cool you are" << age << endl;
    }


}