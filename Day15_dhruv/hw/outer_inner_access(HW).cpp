// Demo code of accessing a data members of nested class in base class

// Public & Private data members of nested class can be accessed by base class or not?

#include <iostream>
using namespace std;

class ClassA
{
    int a = 34;

    public:

        class ClassB
        {
            int b=84;

            public:

                void printB()
                {
                    cout << "b: " << b << endl;
                }
        };

        void printA()
        {
            cout << "a: " << a << endl;
        }

        void callNested()
        {
            ClassB bb;
            bb.printB();
            // bb.b = 45;

            // Outer class can access only public members of inner class, outer class
            // can not access private members of inner class 
        }
};

int main()
{

    ClassA objA;

    objA.printA();
    objA.callNested();

  return 0;
}