// Demo code of Multiple Inheritance

#include <iostream>
using namespace std;

// define Liquid class(Parent class of Petrol class)

class Liquid
{
    public:
    
        void liq()
        {
            cout << "This is Liquid" << endl;
        }
};

// define Fuel class(parent class of Petrol class)

class Fuel
{
    public:

        void fue()
        {
            cout << "This is Fuel" << endl;
        }
};

//define Petrol class

class Petrol: public Liquid, public Fuel    //derived from Liquid and Fuel class
{
    public:

        void pet()
        {
            cout << "This is Petrol" << endl;
        }
};

int main()
{
    Petrol p;   //creating object of Petrol class
    Liquid l;   //creating object of Liquid class
    Fuel f;     //creating object of Fuel class

    l.liq();    
    
    f.fue();

    p.pet();
    p.fue();    // Invoking parent class method from child class
    p.liq();    // Invoking parent class method from child class

    // When we inherit any class from its child class, parents class object is automatically created
}//end of main function
