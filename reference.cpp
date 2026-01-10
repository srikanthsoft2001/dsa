#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 10;
    int &r = a; // initialized at declaration
    // r is not taking any memory - doesn't consume memory

    int b = 25;
    r = b;

    cout << a << endl;
    cout << ++r << endl;
    cout << a << endl;
    return 0;
}