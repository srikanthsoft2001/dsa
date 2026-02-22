#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T x, T y); // Only declaration

    T add();
    T sub();
};

// Constructor definition outside class
template <class T>
Arithmetic<T>::Arithmetic(T x, T y)
{
    a = x;
    b = y;1
}

template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<int> intObj(10, 5);
    cout << "Integer Add: " << intObj.add() << endl;
    cout << "Integer Sub: " << intObj.sub() << endl;

    Arithmetic<float> floatObj(10.5, 5.2);
    cout << "Float Add: " << floatObj.add() << endl;
    cout << "Float Sub: " << floatObj.sub() << endl;

    return 0;
}