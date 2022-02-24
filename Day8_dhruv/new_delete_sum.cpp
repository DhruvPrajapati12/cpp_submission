//Demo code of new and delete keyword
//@ author Dhruv Prajapati

#include <iostream>
using namespace std;

//define class Demo

class Demo
{
    public:

        //declaring variables
        int a,b,c,d,e;

        Demo()      //default constructor
        {
            cout << "Inside the constructor" << endl;
            a=b=c=d=0;
            e=10;
        }

        ~Demo()      //destructor
        {
            cout << "Inside the destructor" << endl;
        }
};  //end of Demo class


int main(){

    //declaration of variables
    int *p1, *p2, sum;
    // int i, *sum;
    // sum = &i;

    // int arr[5] = {0};
    // for(int i=0; i<5; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    Demo a1, *a2, *a3, *a4, *a5;
    //Demo arr[5];    //array of objects

    cout << "size of(a1) " << sizeof(a1) << " and sizeof(a2) " << sizeof(a2) << " and size of value of pointer(*a2) " << sizeof(*a2) << endl;
    //when we create a pointer of object, then object was not created. when we allocated memory
    //for it then object was created

    //allocated memory space using new operator
    p1 = new int;
    p2 = new int;

    a2 = new Demo;

    //a3 = new Demo [5];

    a4 = new Demo;
    a4 = NULL;

    a5 = (Demo *)malloc(sizeof(Demo));
    //when we allocated memory using malloc to the object then constrctor and destructor will not called
    //we can called constructor using following line of code
    //ref - https://stackoverflow.com/questions/2995099/malloc-and-constructors
    new (a5) Demo();

    cout << "Enter first number: ";
    cin >> *p1;
    cout << "Enter second number: ";
    cin >> *p2;
    // *sum = *p1 + *p2;
    sum = *p1 + *p2;
    cout << "Sum of " << *p1 << " and " << *p2 << " is: " << sum << endl;

    //delete pointer variables
    delete p1;
    delete p2;
    delete a2;  //for dynamic memory allocated object when we delete pointer that points to the
                //object, then destructor was called. when we not delete pointer destructor
                //was not called
    //delete [] a3; 
    delete a4;

    //we can called destructor explicitly using following line of code
    a5->~Demo();
    free(a5);

}   //end of main function

//-> when we declare local or globle variable, compiler allocated memory at compile time.the stack
//   memory is used.
//-> when we declare a variable using dynamic memory allocation. then compiler allocated memory
//   at run time, heap memory is used.