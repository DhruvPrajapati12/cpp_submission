// Demo code of operator overloading.
// @author Dhruv Prajapati

//Operator Overloading is complile time polymorphism.

#include <iostream>
using namespace std;

//define Complex class

class Complex
{
    int real, img;        //creating private real and img of interger type

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

        //overloading the 'x' operator here.

        Complex operator + (Complex ob)
        {
            Complex temp;
            temp.real = real + ob.real;            //here real act as a first object and ob.real act as a second object in
            temp.img = img + ob.img;                // c3 = c1 + c2 expression.
            return temp;
        }  //end of over loading function

        //overloading the '-' operator here.

        Complex operator - (Complex ob)
        {
            Complex temp;
            temp.real = real - ob.real;            
            temp.img = img - ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '*' operator here.

        Complex operator * (Complex ob)
        {
            Complex temp;
            temp.real = real * ob.real;            
            temp.img = img * ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '/' operator here.

        Complex operator / (Complex ob)
        {
            Complex temp;
            temp.real = real / ob.real;            
            temp.img = img / ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '%' operator here.

        Complex operator % (Complex ob)
        {
            Complex temp;
            temp.real = real % ob.real;            
            temp.img = img % ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '&' operator here.

        Complex operator & (Complex ob)
        {
            Complex temp;
            temp.real = real & ob.real;            
            temp.img = img & ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '|' operator here.

        Complex operator | (Complex ob)
        {
            Complex temp;
            temp.real = real | ob.real;            
            temp.img = img | ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '&&' operator here.

        Complex operator && (Complex ob)
        {
            Complex temp;
            temp.real = real && ob.real;            
            temp.img = img && ob.img;                
            return temp;
        }  //end of over loading function
        
        //overloading the '||' operator here.

        Complex operator || (Complex ob)
        {
            Complex temp;
            temp.real = real || ob.real;            
            temp.img = img || ob.img;                
            return temp;
        }  //end of over loading function

        //overloading the '++' operator here.

        Complex operator ++(int)
        {
            Complex temp;
            temp.real = real+1;            
            temp.img = img+1;                
            return temp;
        }  //end of over loading function

        //overloading the '--' operator here.

        Complex operator --()
        {
            Complex temp;
            temp.real = real-1;            
            temp.img = img-1;                
            return temp;
        }  //end of over loading function

        //overloading the '<<' operator here.

        Complex operator << (int a)
        {
            Complex temp;
            temp.real = real<<a;            
            temp.img = img<<a;                
            return temp;
        }  //end of over loading function

        //overloading the '>>' operator here.

        Complex operator >>(int a)
        {
            Complex temp;
            temp.real = real>>a;            
            temp.img = img>>a;                
            return temp;
        }  //end of over loading function

        //overloading the '+=' operator here.

        Complex operator +=(int a)
        {
            Complex temp;
            temp.real = real+a;            
            temp.img = img+a;                
            return temp;
        }  //end of over loading function

        //overloading the '-=' operator here.

        Complex operator -=(int a)
        {
            Complex temp;
            temp.real = real-a;            
            temp.img = img-a;                
            return temp;
        }  //end of over loading function

        //overloading the '*=' operator here.

        Complex operator *=(int a)
        {
            Complex temp;
            temp.real = real*a;            
            temp.img = img*a;                
            return temp;
        }  //end of over loading function

        //overloading the '/=' operator here.

        Complex operator /=(int a)
        {
            Complex temp;
            temp.real = real/a;            
            temp.img = img/a;                
            return temp;
        }  //end of over loading function


}; //end of complex class


//If the operator function is member function of the class, then we only pass 1 arguments
//If the operator function is not member function of the class(friend function), then we can pass 2 arguments

int main()
{
    Complex c1(20,10), c2(4,5);   //creating objects of Complex class
    Complex c3;
    c1.display();
    c2.display();
    c3.display();

    cout << "Action starts here " << endl;

    //add two objects
    c3 = c1 + c2; // here, we can not add two objects, so we need to create + operator function.
    //OR c3 = c1.operator+(c2);
    cout << "1. Addition of two object: " << endl;
    c3.display();

    //result = obj1.operator symbol(obj2)
    //result = obj1 symbol obj2;

    //substract two objects
    c3 = c1 - c2; // here, we can not subtract add two objects, so we need to create - operator function.
    cout << "2. Substraction of two object: " << endl;
    c3.display();

    //multiplication two objects
    c3 = c1 * c2; // here, we can not multiply two objects, so we need to create * operator function.
    cout << "3. Multiplication of two object: " << endl;
    c3.display();

    //division two objects
    c3 = c1 / c2; // here, we can not devide two objects, so we need to create / operator function.
    cout << "4. Division of two object: " << endl;
    c3.display();

    //modulo two objects
    c3 = c1 % c2; 
    cout << "5. Modulo of two object: " << endl;
    c3.display();

    //bitwise AND of two objects
    c3 = c1 & c2; 
    cout << "6. bitwise AND of two object: " << endl;
    c3.display();

    //bitwise OR of two objects
    c3 = c1 | c2; 
    cout << "7. bitwise OR of two object: " << endl;
    c3.display();

    //logical AND of two objects
    c3 = c1 && c2; 
    cout << "8. logical AND of two object: " << endl;
    c3.display();

    //logical OR of two objects
    c3 = c1 || c2; 
    cout << "9. logical OR of two object: " << endl;
    c3.display();

    //incrementing object
    c3 = c1++; 
    cout << "10. Increment of object: " << endl;
    c3.display();

    //Decrementing object
    c3 = c1.operator--(); 
    cout << "11. Decrement of object: " << endl;
    c3.display();

    //Left shift of object
    c3 = c1.operator<<(1); 
    cout << "12. Left shift of object: " << endl;
    c3.display();

    //Right shift of object
    c3 = c1.operator>>(1); 
    cout << "13. Right shift of object: " << endl;
    c3.display();

    //+= of object
    c3 = c1.operator+=(3); 
    cout << "14. += of object: " << endl;
    c3.display();

    //-= of object
    c3 = c1.operator-=(3); 
    cout << "15. -= of object: " << endl;
    c3.display();

    //*= of object
    c3 = c1.operator*=(3); 
    cout << "16. *= of object: " << endl;
    c3.display();

    ///= of object
    c3 = c1.operator/=(3); 
    cout << "17. /+ of object: " << endl;
    c3.display();


    return 0;
}  //end of main function