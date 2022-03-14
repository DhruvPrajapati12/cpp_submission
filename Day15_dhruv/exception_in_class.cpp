//This C++ program demonstrares nested class and exception handling though nested class

#include <iostream>
#include <exception>
using namespace std;

// Define Test class

class Test
{
    int x;
    public:

        void read()
        {
            cout << "Enter a number: " << endl;
            cin >> x;
        }

        class EVEN{};   // ABSTRACT class for exception
        class ODD{};    // Abstract class

        void check()   
        {
            if(x % 2 == 0)
            {
                throw EVEN();   // raise exception  EVEN() constructor  //Throwing object through constructor
            }
            else 
            {
                throw ODD();    // raise exception  ODD() constructor   //Throwing object through constructor
            }
        }
};

// We can not throw class, methods, we can throw object.

int main()
{
    Test t;     ////creating object of Test class	
    t.read();
    try 
    {
        t.check();
    }
    catch(Test :: EVEN)     // exception handlar block    catching object by scope resolution
    {
        cout << "Number is even" << endl;
    }
    catch(Test :: ODD)
    {
        cout << "Number is odd" << endl;
    }

    return 0;
}