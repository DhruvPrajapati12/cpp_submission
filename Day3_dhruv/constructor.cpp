// Demonstration of Constructor(Non parameterized).
// @author Dhruv Prajapati

//With out Constructor

#include <iostream>
using namespace std;

/*
class Demo
{
	int number;

	public:

		void setData()
		{
			cout << "Enter the number: ";
			cin >> number;
		}

		void getData()
		{
			cout << "Number: " << number << endl;
		}
};

int main()
{
	Demo n1, n2;
	n1.setData();
	n2.setData();
	n1.getData();
	n2.getData();
}

*/

//with constructor

//define Demo class

class Demo
{
	int number;

	public:

		Demo()		//default Constructor
		{
			cout << "Enter the number: ";
			cin >> number;
		}

		void getData()		//print number
		{
			cout << "Number: " << number << endl;
		}
};		//end of Demo class

//define Area class

class Area
{
	int width, length;

	public:

		Area()		//default constructor
		{
			width=10;
			length=20;
		}

		void calculate()		//print area of the object
		{
			cout << "Area = " << width*length << endl;
		}
};	//and or Area class

int main()
{
	Demo n1, n2;	//creating objects of the Demo class
	n1.getData();
	n2.getData();

	Area a, b;		//creating objects of the Area class
	a.calculate();
	b.calculate();
}//end of main function

