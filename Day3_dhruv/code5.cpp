// Demonstration of friend function, but using two classes. One member function can be friend function of another class.

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

class B;

class A
{
	public:
		
		void fun(B b);
};

class B
{	
	int value=20;

	public:

		friend void A :: fun(B b);
};

void A :: fun(B b)
{
	cout << "Class B private data is : " << b.value << endl;
}

int main()
{
	A a;
	B b;
	a.fun(b);
}
