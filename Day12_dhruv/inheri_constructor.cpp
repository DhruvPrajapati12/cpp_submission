#include<iostream>
using namespace std;

class Base
{
    protected:

        int i;
    
    public:

        Base(){}

        Base(int x)
        {
            i = x;
            cout << "Constructor base" << endl;
        }

        ~Base()
        {
            cout << "Destructor base" << endl;
        }
};

class Base1
{
    protected:

        int k;

    public:
        Base1(){}
        Base1(int x)
        {
            k = x;
            cout << "Constructing base1" << endl;

        }

        ~Base1()
        {
            cout << "Desturctor base1" << endl;
        }
};

class Derived: public Base, public Base1
{
    int j;

    public:

        Derived(int x, int y, int z): Base(y), Base1(z)
        {
            j = x;
            cout << "Constructng dervied" << endl;
        }

        ~Derived()
        {
            cout << "Destructing dervied" << endl;
        }

        void show()
        {
            cout << i << " " << j << " " << k << endl;
        }
};

int main()
{
    // Derived d(1,2,3);
    // Base b(4);
    // Base1 b2(5);
    // d.show();

    Derived ob(3,4,5);
    ob.show();
}