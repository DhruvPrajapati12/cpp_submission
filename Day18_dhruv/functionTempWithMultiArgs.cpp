#include <iostream>
using namespace std;

template <class T, class U>
T multiply(T num1, U num2)
{
    cout << "Result: " << num1*num2 << endl;
    // return num1*num2;
}

int main()
{

    int a = 10;
    int b = 20;
    double x = 2.2;
    double y = 2.5;

    multiply(a, b);
    multiply(x, y);

    multiply(a, x);
    multiply(b, y);

    // cout << multiply(a, b) << endl;
    // cout << multiply(x, y) << endl;

    // cout << multiply(a, x) << endl;
    // cout << multiply(b, y) << endl;


  return 0;
}