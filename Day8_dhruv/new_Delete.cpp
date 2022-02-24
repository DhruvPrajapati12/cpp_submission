//Demo code of new keyword
//@ author Dhruv Prajapati

//new keyword is use allocated memory and delete keyword is use to deallocated memory.

#include <iostream>                   //  ______        ________
using namespace std;                   //| 2000 |       |  55  |
int main()                             //  1000   ---->   2000  
{                                      //   ptr
    //create a new memory location using new keyword.   
    //p points to that memory location
    //allocated memory space using new operator
    int *p = new int;
    *p = 45;
    int a = 3;

    cout << "Address of the pointer: " << p << endl;
    cout << "value of the pointer: " << *p << endl;
    cout << "Size of the value: " << sizeof(*p) << endl;
    cout << "Size of the address: " << sizeof(p) << endl;

    //in 64 bit Os size of the address is 8
    cout << "Size of a: " << sizeof(a) << " and size of p: " << sizeof(p) << endl;

    //delete pointer variable
    delete p;

    return 0;
}   //end of main
