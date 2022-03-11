// Demo code of pure virtual function

// The pure virtual function is virtual function that has no definition within the class 

// -> Pure virtual function means do nothing function 
// ➤ We can say empty function. A pure virtual function has no definition relative to the base class.
// Programmers have to redefine pure virtual function in derived class, because it has no definition in base class.
// ➤ A class containing pure virtual function cannot be used to create any direct objects of its own.

// virtual void function() = 0;


#include <iostream>
using namespace std;

// Define shape class(Herirchical inheri)

class shape         // --> This is abstract class
{
    protected:

        int x;

    public:

        void getData()
        {
            cin >> x;
        }

        virtual int claculateArea(){}       // Pure virtual function
};

// Define square class

class square : public shape
{
    public:

        int claculateArea()
        {
            return x*x;
        }
};

// Define circle class

class circle : public shape
{
    public:

        int claculateArea()
        {
            return 3.14*x*x;
        }
};


int main()
{
    // square s;
    // circle c;
    // // shape b;
    // s.getData();
    // cout << "Area of square: " << s.claculateArea() << endl;

    // c.getData();
    // cout << "Area of circle: " << c.claculateArea() << endl;

    square s;
    circle c;
    shape *ptr;

    ptr = &s;
    ptr->getData();
    cout << "Area of square: " << ptr->claculateArea() << endl;

    ptr = &c;
    ptr -> getData();
    cout << "Area of circle: " << ptr->claculateArea() << endl;
}