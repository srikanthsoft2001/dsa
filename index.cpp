#include <iostream>
using namespace std;

int add(int a, int b) // a, b are the formal parameters - tempraray for the function
{
    int c;
    c = a + b;
    return c;
} // prototype/defination of the function

int main()
{
    int x, y, z;
    x = 10, y = 20;
    // x , y are the actual parameters
    z = add(x, y); // function call
    return 0;
}