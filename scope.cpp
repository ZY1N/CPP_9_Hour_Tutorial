#include <iostream>
using namespace std;

void bucky();

int tuna = 20;

int main()
{
    cout << tuna;
    int tuna = 69;
    //2 collen means use the global one; uniary scope operator
    cout << ::tuna;
    bucky();
}

void bucky()
{
       cout << tuna; 
}