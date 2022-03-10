#include <iostream>
using namespace std;

class Base
{
    public:

        virtual void function()
        {
            cout << "Base virtual " << endl;
        }
};

class Dervied1 : public Base
{
    public:

        void function()
        {
            cout << "Dervied1 virtual" << endl;
        }
};

class Dervied2 : public Base 
{
    public:

        void display()
        {
            cout << "Derived2 display" << endl;
        }
};

int main()
{
    Dervied1 d1;
    Dervied2 d2;

    d2.function();
    // d1.function();
}