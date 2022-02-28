// one class type to another class type conversion(using constructor or using operator overloading)

#include <iostream>
using namespace std;

// Input: class Box1 {id, quantity, rate} 
// Output: class Box2 {id = box1.id, quantity = box1.quantity, rate=box1.rate}

// define Box1 class 

class Box1
{
    public:

        int id, quantity, rate;     //declaration of data members

        Box1(int a, int b, int c)   //parameterized constructor
        {
            id = a;
            quantity = b;
            rate = c;
        }

        void display()  //displaying data members
        {
            cout << "Box 1 class Id: " << id << " Quantity: " << quantity << " Rate: " << rate << endl;
        }
};  //end of Box1 class

//define Box2 class

class Box2
{
    public:

        int id, quantity, rate;     ////declaration of data members

        void operator = (Box1 b)    // casting operator overloading function to convert one class type to other class type
        {
            id = b.id;
            quantity = b.quantity;
            rate = b.rate;
        }

        void display()      //displaying data members
        {
            cout << "Box 2 class Id: " << id << " Quantity: " << quantity << " Rate: " << rate << endl;
        }

};  //end of Box2 class

// Input: class Time1 {hour, minutes} 
// Output: class Time2 {hour = time1.hour, minutes = time1.minutes}

//define Time1 class

class Time1
{
    int hour, minutes;      //declaration of data members

    public:

        Time1(int h, int m)     //parameterized constructor
        {
            hour = h;
            minutes = m;
        }

        int getHour()   //getHour function returns hour
        {
            return hour;
        }

        int getMinutes()    //getMinutes function returns minutes
        {
            return minutes;
        }

        void display()  //displaying data members
        {
            cout << "Time1 class Hour: " << hour << " Minutes: " << minutes << endl;
        }
};  //end of Time1 class

//define Time2 class

class Time2
{
    int hour, minutes;      //declaration of data members

    public:

        void operator = (Time1 t)   //// casting operator overloading function to convert one class type to other class type
        {
            hour = t.getHour();
            minutes = t.getMinutes();
        }

        void display()      //displaying data members
        {
            cout << "Time2 class Hour: " << hour << " Minutes: " << minutes << endl;
        }
};  //end of Time2 class

int main()
{
    Box1 b1(1001, 11, 16);  
    b1.display();

    Box2 b2;
    b2 = b1;    //convert Box1 class type to Box2 class type using operator function
    b2.display();

    cout << "-------------------------------------------------------------" << endl;

    Time1 t1(4, 30);
    t1.display();

    Time2 t2;
    t2 = t1;    //convert Time1 class type to Time2 class type using operator function
    t2.display();
}   //end of main function