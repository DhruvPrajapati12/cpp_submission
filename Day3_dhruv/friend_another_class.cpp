// Demonstration of friend function, but using two classes. One member function can be friend function of another class.
// @author Dhruv Prajapati

//Member function, friend to another class

//• Member functions of one class can be made friend function of another class.
//• The function f is a member of class X and a friend of class Y.

/*
Demo Code

class X {

int f();
};
class Y{

friend int X :: f();
};

*/

#include <iostream>
using namespace std;

//declaring class B

class B;

//define class A

class A
{
	public:
		
		void fun(B b);		//declaration of fun function
};

//define class B

class B
{	
	int value=20;

	public:

		friend void A :: fun(B b);		//declaration friend function
};

void A :: fun(B b)			//definiton of friend function
{
	cout << "Class B private data is : " << b.value << endl;
}

int main()
{
	A a;		//creating object of class A
	B b;		//creating object of class B
	a.fun(b);
}	//end of main function
