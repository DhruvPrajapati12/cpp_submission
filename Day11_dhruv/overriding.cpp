// Demo code of function overriding.

#include <iostream>
using namespace std;

// Define ABC class(Parent class)

class ABC
{
    public:

        void display()
        {
            cout << "This is parent class" << endl;
        }
};

// Define XYZ class(Child class)

class XYZ : public ABC 
{
    public:

        void display()  //overriding parent class method
        {
            cout << "This is child class" << endl;
        }
};

int main()
{
    XYZ x;
    x.display();        //invoking child class function
    x.ABC::display();   //invoking parent class function
}   //end of main function

// Always child class function priority more than parent class function
// Function overriding does not depend upon the function parameters, return type, number of parameters

// Function Overriding means same function name in child class and parent class 