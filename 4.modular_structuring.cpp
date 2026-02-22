#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    /* data */
    r->length = l;
    r->breadth = b;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main()
{
    Rectangle r = {0, 0};

    int l, b;

    printf("Enter length and breadth");
    cin >> r.length >> r.breadth;

    initialize(&r, l, b);
    int a = area(r);
    int p = perimeter(r);
    cout << a << endl;
    cout << p << endl;
    return 0;
}
