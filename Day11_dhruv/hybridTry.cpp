// Demo code of hybrid Inheritance(Virtual class)

#include <iostream>
using namespace std;

    //     A                                    Car
    //     |                                     |
    //     ^        Hydrid Inheritance           ^
    // B       C                        Fuelcar    Electriccar
    //     D                                  Hybridcar
    
//define Car class

class Car
{
    public:

        void carr()
        {
            cout << "This is car" << endl;
        }
};

//define Fuelcar class

class Fuelcar : virtual public Car 
{
    public:

        void fuelcar()
        {
            cout << "This is fuel car" << endl;
        }

        // void indirect_drive()
        // {
        //     carr();
        // }
};

//define Electiccar class

class Electiccar : virtual public Car 
{
    public:

        void elecarr()
        {
            cout << "This is Electric car" << endl;
        }
};

//define Hybridcar class

class HybridCar : public Fuelcar, public Electiccar
{
    public:

        void hybridCar()
        {
            cout << "This is hybrid car" << endl;
            // indirect_drive();
        }
};

int main()
{
    HybridCar hc;       //creating object of Hybridcar class
    Electiccar ec;      //creating object of Electiccar class
    Fuelcar fc;         //creating object of Fuelcar class
    Car c;              //creating object of Car class

    hc.hybridCar(); 
    hc.elecarr();   //Invoking parent class method from child class
    hc.fuelcar();   //Invoking parent class method from child class

    ec.elecarr();
    ec.carr();  //Invoking parent class method from child class

    fc.fuelcar();
    fc.carr();  //Invoking parent class method from child class

    c.carr();

    hc.carr();
}   //end of main function

// Suppose there are 4 classes
// A, B, C, D

// Hybrid inheritance
//         A 
//     B       C 
//         D

// Suppose A class have void car() method, then this function can be accessible by B class and C class.
// But not accessed by D class because of ambiguty(multiple path)

// Virtual class helping us to solve this problem.
// If we declare B and C as a virtual class of A then D can also access void car() function.