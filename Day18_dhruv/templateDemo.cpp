#include <iostream>
using namespace std;

template <class T>

T sum(T n1, T n2)
{
    T rs;
    rs = n1 + n2;
    return rs;
}

// int sum(int a, int b)
// {
//     int c;
//     c = a - b;
//     return c;
// }

int main()
{

    int a = 10, b = 20, c;
    long A = 20, B = 23, C;

    C = sum(A, B);
    cout << "The sum of long: " << C << endl;

    c = sum(a, b);
    cout << "The sum of int: " << c << endl;

  return 0;
}