// Demo code of exception in inheritance

#include <iostream>
using namespace std;

class Base{};

class Child : public Base{};

int main()
{

    try
    {
        throw Child();   // throw object of Base class
    }

    catch(Child c)  // catch child class object
    {
        cout << "Child class object caught" << endl;
    }

    catch(Base b)   // catch base class object 
    {
        cout << "Base class object caught" << endl;
    }

    return 0;
}   // end of main function

// If we throw a base class object(using const)then it can be caught by base class
// catch block , but when we throw a child class object then it can be caught
// by any of base and child class catch block depending upon the kram of catch block