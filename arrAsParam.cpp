#include <iostream>
using namespace std;

void fun(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 2)
        {
            a[i] = 12;
        }
        cout << a[i] << endl;
    }
}

int *fun1(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    fun(A, 5);

    int *A1;
    A1 = fun1(5);

    return 0;
}