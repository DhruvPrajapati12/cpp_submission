// Demo code of function templates and static variables 

// Each instance of function template has its own copy of local static variable 
// Int has its own copy of static variable , double has its own 

#include <iostream>
using namespace std;

template <class T>
void fun()  // template function
{
    static T i = 10;
    cout << "value of i is: " << ++i << endl;
}

template <class T>
void function()     // template function
{
    static T i = 23.4;
    cout << "i: " << ++i << endl;
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

    function<int>();
    function<double>();
    function<int>();
    function<double>();
    return 0;
}