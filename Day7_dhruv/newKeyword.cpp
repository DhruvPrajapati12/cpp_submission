//Demo code of new keyword
//@ author Dhruv Prajapati

//new keyword is use to in dynamic memory allocation

#include <iostream>                   //  ______        ________
using namespace std;                   //| 2000 |       |  55  |
int main()                             //  1000   ---->   2000  
{                                      //   ptr
    //create a new memory location using new keyword.   
    //pt points to that memory location
    float *pt = new float;      
    *pt = 55;           //assigning value to that pointer
    cout << "Address of the pointer: " << pt << endl;
    cout << "value of the pointer: " << *pt << endl;
    cout << "Size of the value: " << sizeof(*pt) << endl;
    cout << "Size of the address: " << sizeof(pt) << endl;

    int *p = new int;
    *p = 45;

    cout << "Address of the pointer: " << p << endl;
    cout << "value of the pointer: " << *p << endl;
    cout << "Size of the value: " << sizeof(*p) << endl;
    cout << "Size of the address: " << sizeof(p) << endl;

    return 0;
}   //end of main
