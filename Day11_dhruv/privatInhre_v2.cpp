// Demo code of multilevel Inheritance(Trying to use protected and private keyword)

#include <iostream>
using namespace std;

// Define Base class(Parent class)

class Base
{
    protected:

        int i, j;

    public:

        void set(int a, int b)  // Set data of Base class
        {
            i = a;
            j = b;
        }

        void show()     // Printing data of Base class
        {
            cout << i << " " << j << endl;
        }
};

// Define Derived1 class(child class)

class Derived1 : private Base 
{
    int k;

    public:

        void setk() //set data of Derived1 class
        {
            k = i * j;
        }

        void showk()    //show data of Derived class
        {
            cout << k << endl;
        }

};

// Define Derived2 class(child class of Derivd1 class)

class Derived2 : public Derived1
{
    int m;

    public:

        void setm() //set data of Derived2 class
        {
            m = i - j;
        }

        void showm()    //show data of Derived2 class
        {
            cout << m << endl;
        }
};

int main()
{
    Derived1 ob1;       // Creating object of Derived class
    Derived2 ob2;       // Creating object of Derived class

    ob1.set(1,2);
    ob1.show();

    ob2.set(3,4);
    ob2.show();
}   //end of main function