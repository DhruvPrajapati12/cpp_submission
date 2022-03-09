// Demo code of how to call parameterized constructor of Parent class

#include<iostream>
using namespace std;

// Define Base1 class(Parent class)

class Base1
{
    protected:

        int i;
    
    public:

        Base1(){}       // Base1 class default constructor

        Base1(int x)        // Base1 class parameterized constructor
        {
            i = x;
            cout << "Constructor Base1" << endl;
        }

        ~Base1()    // Destructor
        {
            cout << "Destructor Base1" << endl;
        }
};

// Define Base2 class(Parent class)

class Base2
{
    protected:

        int k;

    public:

        Base2(){}   // Base2 class default constructor
        Base2(int x)    // Base2 class parameterized constructor
        {
            k = x;
            cout << "Constructing Base2" << endl;

        }

        ~Base2()    // Destructor
        {
            cout << "Desturctor Base2" << endl;
        }
};

// Define Derived class(child class of Base1 and Base2 class)

class Derived: public Base1, public Base2
{
    int j;

    public:

        Derived(int x, int y, int z): Base1(y), Base2(z)    // invoking parameterized consrtcutor of parent class
        {
            j = x;
            cout << "Constructng dervied" << endl;
        }

        ~Derived()  // Destructor
        {
            cout << "Destructing dervied" << endl;
        }

        void show() // showing data
        {
            cout << i << " " << j << " " << k << endl;
        }
};

int main()
{
    // Derived d(1,2,3);
    // Base1 b(4);
    // Base2 b2(5);
    // d.show();

    Derived ob(3,4,5);  //creating object of derived class constructor
    ob.show();
}   // end of main function

// Even if a derived class‘ constructor
// does not use any arguments, it will
// still need to declare one if the base
// class requires it

// Execution of base class constructor

// Method of inheritance Order of execution

// class Derived: public Base
// {
// };

// Base();
// Derived();

// class C: public A, public B
// {
// };

// A();//base(first)
// B();//base(Second)
// C();derived

// class C:public A, virtual public B
// {
// };

// B();//virtual base
// A();//base
// C();derived