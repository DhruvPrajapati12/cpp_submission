// Demo code of constructor in Inheritance(Parent class object is created in backend)

#include <iostream>
using namespace std;

// Define Base class(Parent class)

class Base
{
    int x;

    public:

        Base()  // Default constructor
        {
            cout << "Base default constructor" << endl;
        }

        ~Base()     // Destructor
        {
            cout << "Base destructor" << endl;
        }
};

// Define Derived class(child class)

class Derived : public Base 
{
    int y;

    public:

        Derived()   // Default constructor
        {
            cout << "Derived default constructor" << endl;
        }

        Derived(int i)  //parameterized constructor
        {
            cout << "Derived parameterized constructor" << endl;
        }

        ~Derived()  // Destructor
        {
            cout << "Derived destructor" << endl;
        }
};

int main()
{
    Base b;     
    Derived d;
    Derived d1(3);
}   //end of main function

// Destructor will call in reverse order of objects

// When we create object of Derived class than Base class object is created in backend