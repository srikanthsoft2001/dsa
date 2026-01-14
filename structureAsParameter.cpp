#include <iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bth;
};

struct Test
{
    int A[5];
    int n;
};

int areaCbv(Rectangle r2)
{
    return r2.len * r2.bth;
}

int areaCbL(Rectangle &r3)
{
    r3.len++;
    return r3.len * r3.bth;
}

int changeLength(Rectangle *p, int newLength)
{
    p->len = newLength;
    return 0;
}

int fun(Test t1)
{
    t1.n = 22;
    // cout << t1.n << endl;
    return t1.n;
};

int main()
{
    Rectangle r1 = {10, 15};
    Test t1 = {{1, 2, 3, 4, 5}, 5};

    cout << areaCbv(r1) << endl;
    cout << areaCbL(r1) << endl; // call by refernce
    changeLength(&r1, 20);       // passing the address and new length
    cout << r1.len << endl;

    cout << t1.n << " " << fun(t1) << endl;

    return 0;
}