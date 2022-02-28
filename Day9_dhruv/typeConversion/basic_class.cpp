// Basic type to Class type conversion(using constructor and using operator overloading)

#include <iostream>
using namespace std;

// input: int x = 90
// output: class t1; "t1 = x"  hour: 1, min: 30

// ref- http://www.hexainclude.com/basic-to-class-type-conversion/

//define Time class

class Time
{
    int hour, min;      // declaration of hour, minute data members

    public:

        Time()  // default constructor
        {
            cout << "Default constructor" << endl;
        }

        // for constructor
        Time(int x)     //parameterized constructor
        {
            cout << "Inside Time parameterized constructor" << endl;
            hour = x / 60;
            min = x % 60;
        }

        //for operator overloading
        void operator = (int x)
        {
            cout << "Inside casting overloading function" << endl;
            hour = x / 60;
            min = x % 60;
        }

        void display()  //displaying data members
        {
            cout << "Hour: " << hour << " Minutes: " << min << endl;
        }
};  //end of time class

// input: float x = 4.30
// output: class Time; Time t1; "t1 = x"  hour: 4, min: 30

//define Timefloat class

class Timefloat
{
    float hour, min;        //declaration of data members

    public: 

        Timefloat()     // default constructor
        {
            cout << "Inside default constructor" << endl;
        }

        Timefloat(float x)  // parameteruzed constructor
        {
            cout << "Inside parameterized constructor" << endl;
            hour = (int)x;
            min = (x - hour)*100;
        }

        void display()      //displaying data members
        {
            cout << "Hour: " << hour << " Minutes: " << min << endl;
        }
};  //end of Timefloat class

int main()
{
    int x = 130;
    Time t1(x);
    t1.display();
    t1 = x;  // OR Time t1(x); no need to write t1 = x;
    cout << "x: " << x << endl;
    t1.display();

    cout << "-----------------------------------------------------" << endl;

    float f = 4.27;
    Timefloat t2;
    // Conversion of float type to
    // class type
    t2 = f;             //using constructor
    t2.display();
}   //end of main function


