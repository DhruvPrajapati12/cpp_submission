//Demo code of unary operator overloading using friend function.
//@ author Dhruv Prajapati

//Here we define operator function outside the class. 

#include <iostream>
using namespace std;

//defin Demo class

class Demo
{
    int a, b;      //declaring private member of Demo class

    public:

        Demo(int x, int y)     //parameterized constructor
        {   
            a = x;
            b = y;
        }

        Demo()          //default constructor
        {   
            a = 0;
            b = 0;
        }

        friend Demo operator ++ (Demo &);

        friend Demo operator ++(Demo &, int);

        friend Demo operator -- (Demo &);

        friend Demo operator --(Demo &, int);

        

        void display()
        {
            cout << "a = " << a << " b = " << b << endl;
        }
};  //end of Demo class

Demo operator ++(Demo &obj)      //defining preincrement operator function
{
    Demo d;
    d.a = ++obj.a;
    d.b = ++obj.b;
    cout << "Preincrement of object: ";
    cout << "a = " << d.a << " b = " << d.b << endl;
    return d;
}

Demo operator ++(Demo &obj, int)       //defining postincrement operator function
{
    Demo d;
    d.a = obj.a++;
    d.b = obj.b++;
    cout << "Postincrement of object: ";
    cout << "a = " << d.a << " b = " << d.b << endl;
    return d;
}

Demo operator --(Demo &obj)       //defining predecrement operator function
{
    Demo d;
    d.a = --obj.a;
    d.b = --obj.b;
    cout << "Predecrement of object: ";
    cout << "a = " << d.a << " b = " << d.b << endl;
    return d;
}

Demo operator --(Demo &obj, int)       //defining postdecrement operator function
{
    Demo d;
    d.a = obj.a--;
    d.b = obj.b--;
    cout << "Postdecrement of object: ";
    cout << "a = " << d.a << " b = " << d.b << endl;
    return d;
}

int main()
{
    //Demo class operator functions return the object

    Demo d(5, 7),d1;       //creating objects of Demo class
    cout << "Initial values: ";
    d.display();

    d1 = ++d;       //calling preincrement operator function

    d1 = d++;       //calling postincrement operator function

    d1 = --d;       //calling predecrement operator function

    d1 = d--;       //calling postdecrement operator function
    
    //cout << "Final values: ";
    //d.display();

    return 0;
}   //end of main function