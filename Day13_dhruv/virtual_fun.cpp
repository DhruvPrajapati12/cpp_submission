// Demo code of virtual function

// Virtual function is a member function that is declared within the base class and redefined by child class 
// To create virtual function write virtual before function return type

#include <iostream>
using namespace std;

// Define Base class

class Base
{
    public:

        virtual void show()
        {
            cout << "Base" << endl;
        }
};

// Define Derived1 class

class Derv1 : public Base
{
    public:

        void show()
        {
            cout << "Derv1" << endl;
        }
};

// Define Derived2 class

class Derv2 : public Base
{
    public:

        void show()
        {
            cout << "Derv2" << endl;
        }
};

int main()
{
    Derv1 dv1;  
    Derv2 dv2;

    Base *ptr;

    // cout << sizeof(dv2) << endl;

    ptr = &dv1;     // Base class pointer points to the derived1 class
    ptr -> show();  // If we not define virtual in base class then base class show() function is called

    ptr = &dv2;     // Base class pointer points to the derived2 class
    ptr -> show();   // If we not define virtual in base class then base class show() function is called

    // If we will not defined virtual in base class then Output:(Because of base class pointer)
    // Base
    // Base 

}   // end of main function

// Polymorphism 

// 1. Compile time polymorphism(Early Binding)
//     -> Function overloading
//     -> Operator overloading

// 2. Run time polymorphism(Late Binding)
//     -> Virtual function


// Virtual Function 

// -> When virtual function accessed normally its behave just like any other type of member is_function
// -> But when its is accessed via pointer its supports run time polymorphism
// -> Base class and Derived class have same function name and base class pointer is assigned address of
// Derived class object then also pointer will execute base class function
// -> After making virtual function the compiler will determine which function to execute at run time on the 
// besis of assigned address to pointer of base class 



// --> When a function is made virtual, c++ determine which function to use at run time based on type of 
// object pointed by base pointer, rather than the type of pointer

// Rules for virtual function 

// -> The virtual function must be member of any class 
// -> They cannot ne static members 
// -> They are accessed by using object pointers 
// -> the virtual function can be a friend function of any class
// -> A virtual function  in a base class must be defined , even through it may not be used.
// -> We cannot have virtual constructors, but we can have virtual desturctor
// -> Dervied class pointer cannot point to object of base class