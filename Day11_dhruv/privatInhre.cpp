//Demo code of Single Inheritance(Trying to use private keyword)

#include <iostream>
using namespace std;

// Define Base class(Parent class)

class Base
{
    int i, j;   // declaring private data members of Base class
    public:

        void set(int a, int b)      // Set data of Base class
        {
            i = a;
            j = b;
        }

        void show()     // printing data of Base class
        {
            cout << i << " " << j << endl;
        }
};

// Define Derived class(Derived class)

class Derived : public Base 
{
    int k;

    public:

        Derived(int x)
        {
            k = x;
        }

        void showk()
        {
            cout << k << endl;
        }

};

int main()
{
    Base ob1;   //creating object of Base class
    ob1.set(1,2);
    ob1.show(); 

    Derived ob(3);      // creating object of Derived class
    ob.set(1,2);    // invoking parent class function
    ob.show();      // invoking parent class function
    ob.showk();
}//End of main function