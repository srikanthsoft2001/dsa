#include <iostream>
#include <stdio.h>
using namespace std;

int area(int l, int b)
{
    return l * b;
}

int perimeter(int l, int b)
{
    return 2 * (l + b);
}

int main()
{
    // initialze before initilize them...
    int length, breadth = 0;

    printf("Enter length and breadth");
    cin >> length >> breadth;

    int a = area(length, breadth);
    int p = perimeter(length, breadth);
    cout << a << endl;
    cout << p << endl;
    return 0;
}

// break funcitons to smaller and break..