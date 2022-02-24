//Demo code of {new, delete} and {malloc, free}
//@ author Dhruv Prajapati

#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int;
    *p = 23;

    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 34;

    cout << "Address of the pointer p: " << p << endl;
    cout << "value of the pointer p: " << *p << endl;

    cout << "Address of the pointer ptr: " << ptr << endl;
    cout << "value of the pointer ptr: " << *ptr << endl;

    // for pointer p 
    //delete p;
    free(p);

    //for pointer ptr
    // free(ptr);
    delete ptr;

}//end of main function

//when we allocated dynamic memory using new keyword the we can delete that memory using free function and delete keyword
//when we allocated dynamic memory using malloc function then we can delete that memory location using delete keyword and free function