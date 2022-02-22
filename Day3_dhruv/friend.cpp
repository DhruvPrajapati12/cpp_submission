// Demonstration on friend function
// @author Dhruv Prajapati


//In C++ a Friend Function that is a "friend" of a given class is allowed access to private and protected data in that class.
//• It is declared using friend keyword


//• Friend function can be declared either in public or private part of the class.
//• It is not a member of the class so it cannot be called using the object.
//• Usually, it has the objects as arguments.

//Demo code of friend function

#include <iostream>
using namespace std;

//define Numbers class

class Numbers
{
	int n1, n2;		//Creating two private data members of the Numbers 

	public:
		
		void setData(int a, int b);		//declaration of setData function
		void getData();					//declaration of getData function
	
		//Here n1 and n2 is private so we can't access this variable outside the class, in other function.
		//So in order to access this private members we declare a friend function

		friend int add(Numbers n);		//declaring friend function
}; //end of Numbers class

void Numbers :: setData(int a, int b)		//definition of setData function
{
	n1 = a;
	n2 = b;
}

void Numbers :: getData()			//definition of getData function
{
	cout << n1 << " and " << n2 << endl;
}

int add(Numbers n)			//add function returns the addition of two numbers
{
	return n.n1 + n.n2;
}

//define Box class

class Box
{
	int width;

	public:
		
		//declaring setWidth and getWidth

		void setWidth(int a);		
		void getWidth();

		friend void printWidth(Box b);		//declaring friend function

};

void Box :: setWidth(int a)		//definiton of setWidth function
{
	width = a;
}

void Box :: getWidth()			//definition of getWidth function
{
	cout << "Width = " << width << endl;
}

void printWidth(Box b)		//print the width
{
	cout << "Width == " << b.width << endl;
}

//define Base class

class Base
{
	int val1, val2;

	public:

		void get()
		{
			cout << "Enter the two values: ";
			cin >> val1 >> val2; 
		}
	
		friend float mean(Base ob);
};

float mean(Base ob){
	return float(ob.val1+ob.val2)/2;
}

int main()
{
	Numbers n;		//creating object of the Numbers class
	n.setData(200, 300);
	n.getData();
	cout << "sum = " << add(n) << endl;

	Box b;
	b.setWidth(20);
	b.getWidth();  //getWidth using member function.
	printWidth(b);   //getWidth using friend function.

	Base obj;
	obj.get();
	cout<<"Mean value is : "<<mean(obj) << endl;
}
