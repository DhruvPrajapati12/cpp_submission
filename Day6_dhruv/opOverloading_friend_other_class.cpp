// Demo code of operator overloading using friend function.
// @author Dhruv Prajapati

//Here we define operator function outside the class and make friend
//function to the class

#include <iostream>
using namespace std;

//define Complex class

class Complex
{
    int real, img;        //creating real and img of interger type

    public:

        Complex()   //default constructor
        {
            real=0;
            img=0;
        }

        Complex(int x, int y)   //parameterized constructor
        {
            real=x;
            img=y;
        }

        //display values
        void display()
        {
            cout << "Real: " << real << endl;
            cout << "Img part: " << img << endl << endl;
        }

        friend Complex operator + (Complex ob1, Complex ob);

        //overloading the '-' operator here.

        Complex operator - (Complex ob)
        {
            Complex temp;
            temp.real = real - ob.real;            
            temp.img = img - ob.img;                
            return temp;
        }  //end of over loading function

        friend Complex operator * (Complex ob1, Complex ob);

        friend Complex operator / (Complex ob1, Complex ob);
        
//If the operator function is member function of the class, then we only pass  1 arguments
//If the operator function is not member function of the class(friend function), then we can pass 2 arguments
        

}; //end of complex class

//overloading the '+' operator here.

Complex operator + (Complex ob1, Complex ob)
{
    Complex temp;
    temp.real = ob1.real + ob.real;
    temp.img = ob1.img + ob.img;                
    return temp;
}  //end of over loading function

//overloading the '*' operator here.

Complex operator * (Complex ob1, Complex ob)
{
    Complex temp;
    temp.real = ob1.real * ob.real;            
    temp.img = ob1.img * ob.img;                
    return temp;
}  //end of over loading function

//overloading the '/' operator here.

Complex operator / (Complex ob1, Complex ob)
{
    Complex temp;
    temp.real = ob1.real / ob.real;            
    temp.img = ob1.img / ob.img;                
    return temp;
}  //end of over loading function


int main()
{
    Complex c1(10,20), c2(5, 10);
    Complex c3;
    c1.display();
    c2.display();
    c3.display();

    cout << "Action starts here " << endl;

    //add two objects
    //c3 = c1 + c2; // + we can not add two objects, so we need to create + operator function.
    c3 = operator+(c1, c2);
    cout << "Addition of two object: " << endl;
    c3.display();

    //substract two objects
    c3 = c1 - c2; // + we can not add two objects, so we need to create - operator function.
    cout << "Substraction of two object: " << endl;
    c3.display();

    //multiplication two objects
    c3 = c1 * c2; // + we can not add two objects, so we need to create * operator function.
    cout << "Multiplication of two object: " << endl;
    c3.display();

    //division two objects
    c3 = c1 / c2; // + we can not add two objects, so we need to create / operator function.
    cout << "Division of two object: " << endl;
    c3.display();

    return 0;
}  //end of main function