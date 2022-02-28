// Class type to Basic type conversion(using casting operator overloading function)
// fun syntax:
// operator typename()
// {
        // statements
// }

#include <iostream>
using namespace std;

// Input: class Time { int hour, min; } Hour: 2, Minutes: 30
// Output: int x; x = 150 minutes

// ref - http://www.hexainclude.com/class-type-to-basic-conversion/

//define Time class

class Time
{
    int hour, min;      //declaration of data members

    public:

        // Time()      //default constructor
        // {
        //     hour = 0;
        //     min = 0;
        // }

        Time(int a, int b)      //parameterized constructor
        {
            hour = a;
            min = b;
        }

        // int operator=()          //Not working
        // {
        //     return hour*60 + min;
        // }

        operator int()      //casting operator overloading function to convert Class type to int type
        {
            return hour*60 + min;
        }

};  //end of Time class

int main()
{
    int a, b, x;
    cout << "Enter hours and minutes: ";
    cin >> a >> b;

    Time t1(a, b);
    x = t1;     //convert class type to basic type
    cout << "Total minutes: " << x << endl;
}   // end of main function


    // The conversion function should satisfy the following condition:

    // It must be a class member.
    // It must not specify the return value even though it returns the value.
    // It must not have any argument.
