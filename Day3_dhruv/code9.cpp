// Demonstration of static member function.

/*
Static Member Functions

Static member functions can access only static members of the class.
Static member functions can be invoked using class name, not object.
There cannot be static and non-static version of the same function.

 They cannot be virtual.
 They cannot be declared as constant or volatile.
 A static member function does not have this pointer.
*/

#include <iostream>
using namespace std;

class Item
{
	int number;
	static int count;// static variable declaration

	public:
		void setData()
		{
			number++;
			count++;
		}
		static void getCount()
		{
			cout<<"value of count: "<<count<<endl;
		}
};
int Item :: count; // static variable definition

int main()
{
	Item a,b,c;
	a.setData();
	Item::getCount();

	b.setData();
	Item::getCount();

	c.setData();
	Item::getCount();
}
