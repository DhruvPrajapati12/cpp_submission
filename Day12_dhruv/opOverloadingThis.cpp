// Demo code of operator overloading using this keyword

#include <iostream>
using namespace std;

class B;

class A
{
    public:
    int a=12;
    public:

        A operator+(B b);

};
class B
{
    public:
    int a=45;
};

A A:: operator+(B b)
        {
            // A temp;
            this -> a = this ->a + b.a;
            return *this;
        }

int main()
{   
    A a;
    B b;
    A aa;

    aa = a + b;// aa = a.operator+(b)

    cout << aa.a;
}   