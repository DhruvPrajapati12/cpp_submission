// Demo code of Dervied class constructor

#include <iostream>
using namespace std;

// Define Base class(Parent class)

class Base
{
    int x;

    public:
        Base()  // Default constructor
        {
            cout << "Base default constrictors\n";
        }
};

// Define Derived class(Child class)

class Derived : public Base
{

    int y;

    public:
        Derived()    // Default constructor
        {
            cout << "Derived default constructor\n";
        }
        Derived(int i)      //parameterized constructor
        {   
            cout << "Derived parameterized constructor\n";
        }
};

int main()
{

    Base b;     //created Object of Base class

    Derived d1; //created object of derived class(base class object created in backend because of inheritance)

    Derived d2(10); //created object of derived class(base class object created in backend because of inheritance)
}   //end of main function
