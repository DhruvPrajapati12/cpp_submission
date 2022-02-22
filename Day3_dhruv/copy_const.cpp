// Demonstration of copy constructor.
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define demo class

class Demo
{
	int x, y;	//declaring private data members

	public:

		Demo(int a, int b)       //parameterized constructor
		{
			x = a;
			y = b;
			cout << "Constructor is called." << endl;
		}

		Demo(Demo &d)		//copy constructor
		{
			x = d.x;
			y = d.y;
			cout << "Copy constructor is called." << endl;
		}
};	//end of Demo class

int main()
{
	Demo d1(20, 30);
	Demo d2(d1);
}
