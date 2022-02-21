// Demnstration of static data members
//Slide 27 not understanadble

#include <iostream>
using namespace std;

class Item
{
	int number=5;
	static int count;

	public:

		void setData()
		{
			number++;
			count++;
		}
		void getcount()
		{
			cout<<"\nvalue of count: "<<count << " value of number: " << number;
		}
};

int Item :: count;

int main()
{
	Item a,b,c;

	a.setData();
	a.getcount();

	b.setData();
	b.getcount();

	c.setData();
	c.getcount();

	cout << endl;

return 0;
}
