#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap1(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b; // basically what we are doing is we are not swaaping the refernce address but accessing the values of the x, y using pointers and just interchanging them.
    *b = temp;
    cout << *a << *b << endl;
    cout << a << b << endl;
}
void swap2(int &a, int &b)//the same actually it is referencing actually.
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
}

int main()
{
    int x = 10, y = 20;
    // swap(x, y);
    // cout << "x = " << x << " y = " << y << endl;

    // swap1(&x, &y);
    // cout << "x = " << x << " y = " << y;

    swap2(x, y);
    cout << "x = " << x << " y = " << y;

    return 0;
}