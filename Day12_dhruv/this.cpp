// Demo code of this pointer

#include <iostream>
using namespace std;

class Test
{
    int mark;
    float spi;

public:
    void setData(int mark, float spi)
    {
        this->mark = mark;      
        this->spi = spi;
    }

    // OR 

    // void setData(int x, float y)
    // {
    //     mark = x;      
    //     spi = y;
    // }
    void dis()
    {
        cout << "Marks =" << mark << endl;
        cout << "SPI =" << spi << endl;
    }
};

class Sample
{
    int a, b;

    public:
        
        void input(int a, int b)
        {
            this->a = a + b;        //this pointer is used when local
                                    //variable’s name is same as member’s
                                    //name.
            this->b = a - b;
        }

        void output()
        {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

int main()
{
    Test t1;
    t1.setData(600, 9.5);   //When a member function is called, it
                            //automatically passes a pointer to invoking
                            //object.             
    t1.dis();

    Sample s;
    int a = 6, b = 5;
    s.input(a,b);
    s.output();
    return 0;
}

//  Within member function, the members can
// be accessed directly, without any object or
// class qualification.
//  But implicitly members are being accessed
// using this pointer

// ‘this’ pointer represent an object that invoke or call a member
// function.
// It will point to the object for which member function is called.
// It is automatically passed to a member function when it is called.
// It is also called as implicit argument to all member function.

// Note:
//  Friend functions can not be accessed using this pointer, because friends are not
// members of a class.
//  Only member functions have a this pointer.
//  A static member function does not have this pointer.