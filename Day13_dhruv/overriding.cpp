// Demo code method overriding

#include <iostream>
using namespace std;

// Define Base class(Parent class)

class base
{
public:
    int b;

    // getdata method
    void show()
    {
        cout << "b:" << b;
    }
};

// Define derived class(Child class)

class derived : public base
{
public:
    int d;
    void show()
    {
        cout << "b: " << b << " d:" << d << endl;
    }
};

int main()
{
    base b1;
    derived d1;
    base *bptr;
    bptr = &b1;
    cout << "Base Class pointer assign address of base class object\n";
    bptr->b = 100;
    bptr->show();
    
    bptr = &d1;
    bptr->b = 200;
    cout << "\nBase class pointer assign address of derived class object\n";
    bptr->show();

    derived *dptr;
    dptr = &d1;
    cout << "\nDerived class pointer assign address of derived class object\n";
    dptr->d = 300;
    dptr->show();
    return 0;
}   // end of main function