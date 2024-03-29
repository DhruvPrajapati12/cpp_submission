// Demo code of pointer to derived class

// -> We can use pointers not only to the base objects but also to the objects of derived
// classes.
// -> A single pointer variable of base type can be made to point to objects belonging
// to base as well as derived classes.

#include <iostream>
using namespace std;

class base      //parent class
{
    public:

        void show()
        {
            cout << "This is show of base" << endl;
        }
};

class dervied : public base     //child class
{
    public:

        void dervided()
        {
            cout << "This is show of dervived" << endl;
        }
};

int main()
{
    base *ptr, *ptr1;
    base b;
    dervied d, *ptr2;

    ptr = &b;   // Base pointer point to base object
    ptr->show();

    ptr1 = &d;  // Base pointer point to derived object
    ptr1->show();
    ((dervied *)ptr1) -> dervided();    //Base pointer explicitly casted into derived type

    // we can access those members of derived class which are inherited from base class by base class pointer
    // but we can not access original member of dervied class which are not inherited  from base class usig base class object
    // we cam access original member of dervied class using pointer of derived class 
    
    // ptr2 = &b;   //ERROR
    // ptr2 -> show();

    ptr2 = (dervied*)&b;    // Here we access base class data members and member functions using dervied class pointer
    ptr2 -> show();
}

// For example:
// Base *ptr;
// Base b;
// Derived d;
// ptr = &b; //points to base object

// //We can make ptr to point to the object d as follows

// ptr = &d; //base pointer point to derived object