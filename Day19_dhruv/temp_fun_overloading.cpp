// Demo code of template function overloading
// Author: Dhruv Prajapati

// If there are more than one function of same name, which differ only by number
// and type of parameters, it is called function overloading

// If at least one of them is a template function, then it is called tamplate function
// overloading

// Template function overloading can be done by defining same function name with 
// diff number of args, all template/ generic form  

#include <iostream>
using namespace std;

template <class T1>
void sum(T1 a, T1 b, T1 c)  //(int, int, int), (double, double, double), (ch,ch,ch)
{
    cout << "sum: " << a+b+c << endl;
}

template<class T1, class T2>
void sum(T1 a, T2 b, T1 c)  //(int, double, int), (double, int, double)
{
    cout << "Sum: " << a+b+c << endl;
}

void sum(int a, int b, int c)   // normal function
{
    cout << "Sum: " << a+b+c << endl;
    cout << "normal" << endl;
}

int main()
{
    int a=1, b=2, c=3;
    double a1=1.1, b1=2.2, c1=3.3;
    sum(a,b,c); // normal fun called
    sum(a, b1, c); //   2nd template fun called     DOUBT
    sum(a,b,c); // normal fun called

  return 0;
}