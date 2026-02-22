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
    Rectangle()
    {
        length = 0;
        breadth = 0;
    };

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
    // mutator
    void setLength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }
    // getter
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
    // distructor..
    Rectangle ::~Rectangle()
    {
    }
};

int main()
{
    Rectangle r;
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
