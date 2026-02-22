#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // initialze before initilize them...
    int length, breadth = 0;

    printf("Enter length and breadth");
    cin >> length >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << area << endl;
    cout << perimeter << endl;
    return 0;
}