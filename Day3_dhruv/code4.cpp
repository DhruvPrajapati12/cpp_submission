// Demonstration on friend function


//In C++ a Friend Function that is a "friend" of a given class is allowed access to private and protected data in that class.
//• It is declared using friend keyword


//• Friend function can be declared either in public or private part of the class.
//• It is not a member of the class so it cannot be called using the object.
//• Usually, it has the objects as arguments.

#include <iostream>
using namespace std;

class Numbers
{
	int n1, n2;

	public:
		
		void setData(int a, int b);
		void getData();
	
		//Here n1 and n2 is private so we can't access this variable outside the class, in other function.
		//So in order to access this provate members we declare a friend function

		friend int add(Numbers n);
};

void Numbers :: setData(int a, int b)
{
	n1 = a;
	n2 = b;
}

void Numbers :: getData()
{
	cout << n1 << " and " << n2 << endl;
}

int add(Numbers n)
{
	return n.n1 + n.n2;
}



class Box
{
	int width;

	public:
		
		void setWidth(int a);
		void getWidth();
		friend void printWidth(Box b);

};

void Box :: setWidth(int a)
{
	width = a;
}

void Box :: getWidth()
{
	cout << "Width = " << width << endl;
}

void printWidth(Box b)
{
	cout << "Width == " << b.width << endl;
}


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
	Numbers n;
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
