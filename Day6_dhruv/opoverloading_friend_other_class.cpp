// Demo code of operator overloading using friend function of another class

#include <iostream>
using namespace std;

//declaring class B

class B;

//define class A

class A
{
    int a=20;
    int b=30;

    public:

        A operator + (B obj2);      //declare '+' operator overloading function

        A operator - (B obj2);      //declare '-' operator overloading function

        void display()      //display data members
        {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

//define class B

class B
{
    int a1 = 25;
    int b1 = 45;

    public:

        friend A A :: operator + (B obj2);      //friend function- '+' operator overloading function
        friend A A :: operator - (B obj2);      //friend function- '-' operator overloading function

        void display()      //display data members
        {
            cout << "a: " << a1 << endl;
            cout << "b: " << b1 << endl;
        }
};

//defining '+' operator overloading function

A A :: operator + (B obj2)
{
    A obj;
    obj.a = a + obj2.a1;
    obj.b = b + obj2.b1;
    return obj;
}

//defining '-' operator overloading function

A A :: operator - (B obj2)
{
    A obj;
    obj.a = a - obj2.a1;
    obj.b = b - obj2.b1;
    return obj;
}

int main()
{
    A a, a1;        //creating objects of class A
    B b;            //creating object of class B

    a.display();
    b.display();

    a1 = a.operator+(b);
    a1.display();

    a1 = a.operator-(b);
    a1.display();
}//end of main function