//Demo code of == operator overloading.
//@ author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Complex class

class Complex
{
    int r, i;

    public:

        Complex()       //default constructor
        {
            r=i=0;
        }

        Complex(int x, int y)       //parameterized constructor
        {
            r = x;
            i = y;
        }

        void display()
        {
            cout << "Real: " << r << endl;
            cout << "Img: " << i << endl;
        }

        int operator == (Complex c)     //define == operator function
        {
            if(r == c.r && i == c.i)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
}; //end of Complex class

int main()
{
    Complex c1(5,6), c2(5,6);

    if(c1 == c2)
    {
        cout << "Objects are equal" << endl;
    }
    else
    {
        cout << "Object are not equal"<< endl;
    }

}