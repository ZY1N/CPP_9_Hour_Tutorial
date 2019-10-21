//preprocessor directive: says its including a file that we need to use later
#include <iostream>

//standard library = std includes c++ stuff
using namespace std;

//functions make up computer programs
int     main()
{
    //output stream object cout puts it in the same stream
    // << stream insertion opperator
    cout << "Hello world!" << endl;

    //cin input stream object
    //steram extraction operator >>

    int a;
    int b;
    int sum;

    cout << "enter a number \n ";
    cin >> a;

    cout << "another one \n";
    cin >> b;

    cout << "your number is " << a+b;

    return 0;
}