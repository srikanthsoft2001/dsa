#include <iostream>
// #include <stdlib.h>
using namespace std;

int main()
{
    int a = 10;  // a is initialized so has a memeory locaiton - at some address
    int *p = &a; // dont use * at diclaration.
    int arr[5] = {1, 2, 3, 4, 5};
    int *p3 = arr;

    // mind: we store this stored in memory
    // int *p1 =  (int *)malloc(5*sizeof(int));
    int *p2 = new int[5];
    p2[0] = 1;
    p2[1] = 1;
    p2[2] = 1;
    p2[3] = 1;
    p2[4] = 1;

    cout << "Defrerencing : assessing the data present at that memory location or pointer:" << " " << *p << " " << &a << endl;
    cout << p << endl;

    cout << "Accessing the element and address of the array elements in an array arr" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << p3[i] << endl;
        cout << &p3[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {

        cout << p2[i] << endl;
    }
    cout << "size of pointer " << sizeof(p) << endl;
    // memory should be released.
    delete[] p2;
    p2 = nullptr;
    for (int i = 0; i < 5; i++)
    {

        cout << p2[i] << endl;
    }
    return 0;
}