#include <iostream>
using namespace std;

template <class T>

void swap1(T &n1, T &n2)
{
    T ans;
    ans = n1;
    n1 = n2;
    n2 = ans;
}

int main()
{
    int a = 20; 
    int b = 30;
    cout << "Before swapping a: " << a << " b: " << b << endl;
    swap1(a, b);
    cout << "After swapping a: " << a << " b: " << b << endl;

    float a1 = 2.2; 
    float b1 = 3.3;
    cout << "Before swapping a: " << a1 << " b: " << b1 << endl;
    swap1(a1, b1);
    cout << "After swapping a: " << a1 << " b: " << b1 << endl;

    string a2 = "dhruv"; 
    string b2 = "het";
    cout << "Before swapping a: " << a2 << " b: " << b2 << endl;
    swap1(a2, b2);
    cout << "After swapping a: " << a2 << " b: " << b2 << endl;

  return 0;
}