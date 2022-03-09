// Just like pointers to normal variables and functions, we can have pointers to class
// members (variables and methods).

#include <iostream>
using namespace std;

class ABC
{
    public:

        int a = 50;
};
int main()
{
    ABC ob1;
    ABC *ptr;
    ptr = &ob1;
    cout << ob1.a << endl;
    cout << ptr->a << endl; // Accessing member with pointer
}

// When accessing
// members of a class given
// a pointer to an object, use
// the arrow
// (–>) operator instead of
// the dot operator.

// class demo{
// int i;
// public:
// demo(int x)
// {
// i=x;
// }
// int getdata(){
// return i;}

// };

// int main(){
// demo d(55),*ptr;
// ptr=&d;
// cout<<ptr->getdata();
// }