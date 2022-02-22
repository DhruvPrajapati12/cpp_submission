// Demonstration of static data members
//Slide 27 not understandable
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Item class

class Item
{
	int number=5;		//declaring non static number data member
	static int count;		//declaring static count data member, its initialized with 0

	public:

		void setData()		//setData function incrementing the data members
		{
			number++;
			count++;
		}
		void getcount()		//print the data members
		{
			cout<<"\nvalue of count: "<<count << " value of number: " << number;
		}
};	//end if Item class

int Item :: count;		//define count static data member

int main()
{
	Item a,b,c;		//creating three objects of the Item class

	a.setData();
	a.getcount();

	b.setData();
	b.getcount();

	c.setData();
	c.getcount();

	cout << endl;

return 0;
}	//end of main function
