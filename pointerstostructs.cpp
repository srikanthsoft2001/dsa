#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int len;
    int breadth;
};

int main()
{
    Rectangle rectangle1 = {10, 5};
    Rectangle *p = &rectangle1;

    (*p).len = 25;
    cout << rectangle1.len << endl;

    p->breadth = 26;
    cout << rectangle1.breadth << endl;

    cout << p << endl;

    // pointer to dynamic structute.
    // mallac will allocate memory
    Rectangle *p1;
    p1 = (Rectangle *)malloc(sizeof(Rectangle));

    p1->len = 10;
    p1->breadth = 25;

    cout << p1->len << " " << p1->breadth << endl;
    // or
    Rectangle *p3 = new Rectangle;
    p3->len = 100;
    p3->breadth = 200;
    cout << p3->len << " " << p3->breadth << endl;

    return 0;
};
