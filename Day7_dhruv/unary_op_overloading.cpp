//Demo code of unary operator overloading.
//@ author Dhruv Prajapati

//Here we define operator function inside the class. 

#include <iostream>
using namespace std;

//defin Space class

class Space
{
    int x,y,z;      //declaring private members of the Space class

    public:

        Space()     //default constructor
        {
            x=0;
            y=0;
            z=0;
        }

        Space(int a, int b, int c)      //parameterized constructor
        {
            x = a;
            y = b;
            z = c;
        }

        //overloading '-' operator here
        //declare '-' operator overloading function
        void operator - ();

        //overloading '--' operator here
        //declare '--'(predecrement) operator overloading function
        void operator -- ();

        //overloading '--' operator here
        //declare '--'(postdecrement) operator overloading function
        void operator -- (int);

        //overloading '++' operator here
        //declare '++'(preincrement) operator overloading function
        void operator ++ ();

        //overloading '++' operator here
        //declare '++'(postincrement) operator overloading function
        void operator ++ (int);

        void display()      //prints the data members of the Space class
        {
            cout << "x = " << x << " y = " << y << " z = " << z << endl;
        }
};  //end of Space class

//defining '-' overloading function
void Space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

//defining '--'(predecrement) overloading function
void Space :: operator--()
{
    x = --x;
    y = --y;
    z = --z;
}

//defining '--'(postdecrement) overloading function
void Space :: operator--(int)
{
    x = x--;
    y = y--;
    z = z--;
}

//defining '++'(preincrement) overloading function
void Space :: operator++()
{
    x = ++x;
    y = ++y;
    z = ++z;
}

//defining '++'(postincrement) overloading function
void Space :: operator++(int)
{
    x = x++;
    y = y++;
    z = z++;
}

//Define Demo class

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

        Demo operator ++()      //defining preincrement operator function
        {
            Demo d;
            d.a = ++a;
            d.b = ++b;
            //cout << "pre increment : " << a << endl;
            return d;
        }

        Demo operator ++(int)       //defining postincrement operator function
        {
            Demo d;
            d.a = a++;
            d.b = b++;
            //cout << "post increment : " << a << endl;
            return d;
        }

        Demo operator --()       //defining predecrement operator function
        {
            Demo d;
            d.a = --a;
            d.b = --b;
            return d;
        }

        Demo operator --(int)       //defining postdecrement operator function
        {
            Demo d;
            d.a = a--;
            d.b = b--;
            return d;
        }

        void display()
        {
            cout << "a = " << a << " b = " << b << endl;
        }
};  //end of Demo class

int main()
{
    Space s1(5,6,7);        //creating object of Space class
    cout << "Original values of obejct: ";
    s1.display();
    
    cout << "predecrement of objects: ";
    --s1;       //calling predecrement operator operator function 
    s1.display();

    cout << "postdecrement of objects: ";
    s1.operator--();       // calling postdecrement operator function
    s1.display();

    cout << "preincrement of objects: ";
    ++s1;       //calling preincrement operator function
    s1.display();

    cout << "postincrement of objects: ";
    s1.operator++();        //calling postincrement operator function
    s1.display();

    cout << "nagative of objects: ";
    -s1;
    s1.display();

    cout << endl;

    //Demo class operator functions return the object

    Demo d(5, 7),d1;       //creating objects of Demo class
    cout << "Initial values: ";
    d.display();

    d1 = ++d;       //calling preincrement operator function
    cout << "Preincrement of object: ";
    d1.display();

    d1 = d++;       //calling postincrement operator function
    cout << "Postincrement of object: ";
    d1.display();

    d1 = --d;       //calling predecrement operator function
    cout << "Predecrement of object: ";
    d1.display();

    d1 = d--;       //calling postdecrement operator function
    cout << "Postdecrement of object: ";
    d1.display();

    cout << "Final values: ";
    d.display();
}//end of main function



