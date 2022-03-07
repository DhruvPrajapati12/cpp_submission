// Demo code of hybrid Inheritance

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

class Fuelcar : public Car 
{
    public:

        void fuelcar()
        {
            cout << "This is fuel car" << endl;
        }
};

//define Electiccar class

class Electiccar : public Car 
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
}   //end of main function