#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
private:
    /* data */
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    };

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    void setLength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }
};

int main()
{
    Rectangle r = {0, 0};
    printf("Enter the lenght and breadth : ");
    int l, b;
    cin >> l >> b;
    r.setLength(l);
    r.setBreadth(b);
    int a = r.area();
    int p = r.perimeter();
    cout << a << " " << p << endl;

    return 0;
}
