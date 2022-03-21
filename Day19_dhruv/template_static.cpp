#include <iostream>
using namespace std;

template <class T>
void fun()
{
    static T i = 10.2;
    cout << "value of i is: " << ++i << endl;
}

int main()
{
    fun<int>();
    fun<int>();
    fun<double>();
    fun<int>();
    fun<int>();
    fun<double>();
    // static int a = 23;
    // cout << a << endl;
    return 0;
}