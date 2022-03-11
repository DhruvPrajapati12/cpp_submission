// Demo code of Inheritance(Quiz question)

// A    B 
// C    D 
//    E
//    F

#include <iostream>
using namespace std;

// #define MAX 20;

// Define A class

class A
{
    public:

        void displayA()
        {
            cout << "Class A" << endl;
        }
};

// Define B class

class B
{
    public:

        void displayB()
        {
            cout << "Class B" << endl;
        }
};

// Define C class

class C : public A
{
    public:

        void displayC()
        {
            cout << "Class C" << endl;
        }
};

// Define D class

class D : public B
{
    public:

        void displayD()
        {
            cout << "Class D" << endl;
        }
};

// Define E class

class E : public C, public D
{
    public:

        void displayE()
        {
            cout << "Class E" << endl;
        }
};

// Define F class

class F : public E
{
    public:

        void displayF()
        {
            cout << "Class F" << endl;
        }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;

    a.displayA();
    // b.displayA();    // Error
    // b.displayC();    // Error
    // b.display(D);    // Error
    f.displayA();
    f.displayC();
    f.displayB();
    f.displayE();

    e.displayA();
    e.displayB();
    e.displayC();

}   // end of main function