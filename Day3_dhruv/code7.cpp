//Demonstration of static variable

//Normal method without static variable.

/*
#include <iostream>
using namespace std;

class Demo
{
	int count = 0;

	public: 

		void getCount()
		{
			cout << "Count = " << ++count << endl;
		}
};


int main()
{
	Demo d1, d2, d3, d4, d5;
	d1.getCount();
	d2.getCount();
	d3.getCount();
	d4.getCount();
	d5.getCount();
}

*/

//Using static variable

#include <iostream>
using namespace std;

class Demo
{
	static int count;

	public: 

		void getCount()
		{
			cout << "Count = " << ++count << endl;
		}
};

int Demo :: count;

int main()
{
	Demo d1, d2, d3, d4, d5;
	d1.getCount();
	d2.getCount();
	d3.getCount();
	d4.getCount();
	d5.getCount();
}

//A static data member is useful, when all objects of the same class must share a common information.

//It is initialized to zero when first object of class created
//Only one copy is created for each object
//Just write static keyword prefix to regular variable
//Its life time is entire program

//Static members are declared inside the class and defined outside the class.

/*

Data members of the class which are shared by all objects are known as static data
members.
Only one copy of a static variable is maintained by the class and it is common for all
objects.

Static members are declared inside the class and defined outside the class.
It is initialized to zero when the first object of its class is created.

you cannot initialize a static member variable inside the class declaration.
It is visible only within the class but its lifetime is the entire program.
Static members are generally used to maintain values common to the entire class.
*/
