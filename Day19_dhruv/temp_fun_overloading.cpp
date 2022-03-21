#include <iostream>
using namespace std;

template <class T1>
void sum(T1 a, T1 b, T1 c)
{
    cout << "Sum: " << a+b+c << endl;
}

template<class T1, class T2>
void sum(T1 a, T2 b, T1 c)
{
    cout << "Sum: " << a+b+c << endl;
}

void sum(int a, int b, int c)
{
    cout << "Sum: " << a+b+c << endl;
}

int main()
{
    int a=1, b=2, c=3;
    double a1=1.1, b1=2.2, c1=3.3;
    sum(a,b,c);
    sum(a,c,b1);
    sum(a,b,c);

  return 0;
}