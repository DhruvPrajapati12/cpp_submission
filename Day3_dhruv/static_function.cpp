// Demonstration of static member function.
// @author Dhruv Prajapati

/*
Static Member Functions

-> Static member functions can access only static members of the class.
-> Static member functions can be invoked using class name, not object.
-> There cannot be static and non-static version of the same function.

->  They cannot be virtual.
->  They cannot be declared as constant or volatile.
->  A static member function does not have this pointer.
*/

#include <iostream>
using namespace std;

//define Item class

class Item
{
	int number;			//non statuc variable declaratin
	static int count;	// static variable declaration

	public:

		void setData()	//setData() function incrementing data members of the Item class
		{
			number++;
			count++;
		}

		static void getCount()		//static function definition
		{
			cout<<"value of count: "<<count<<endl;
		}

};	//end of Item class

int Item :: count; // static variable definition

int main()
{
	Item a,b,c;		//creating a,b,c objects of the Item class
	a.setData();
	Item::getCount();		//calling static function

	b.setData();
	Item::getCount();

	c.setData();
	Item::getCount();
}	//end of main function()
