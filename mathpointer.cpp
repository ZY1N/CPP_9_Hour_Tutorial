#include <iostream>
using namespace std;

int main()
{
    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    cout << "bp is at" << bp0 << endl;
    cout << "bp is at" << bp1 << endl;
    cout << "bp is at" << bp2 << endl;

    bp0+= 2;
    cout << "bp is at" << bp0 << endl;
}