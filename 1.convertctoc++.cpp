#include <iostream>
using namespace std;

class Rectangle
{
private:
    /* data */
    int length;
    int breadth;

    // the functions are ment for rectangle so we include htem inside them in class...
public:
    Rectangle(int l, int b)
    { // constructor
        length = l;
        breadth = b;
    }

    int area()
    {

        return length * breadth;
    }

    void changelength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r(10, 5); // now this is a object...

    cout << r.area() << endl;
    r.changelength(20); // directly accessing the code...
}