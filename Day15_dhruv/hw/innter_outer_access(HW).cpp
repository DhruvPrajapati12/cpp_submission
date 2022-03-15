// Demo code of accessing a data members of base class in nested class

// Public & Private data members of base class can be accessed by nested class or not

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

                void outerAccess()
                {
                    ClassA aa;
                    aa.a = 44;
                    aa.printA();

                    // Inner class can access  public members and private members
                    //  of outer class(All members)
                }
        };

        void printA()
        {
            cout << "a: " << a << endl;
        }
};

int main()
{

    ClassA :: ClassB objB;

    objB.outerAccess();
    objB.printB();

  return 0;
}