#include <iostream>
using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    cout << "area" << endl;
    return r.length * r.breadth;
}

void changelength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changelength(&r, 20);
}