// Demonstration of parameterized constructor.
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Rect class

class Rect
{
	int m, n;

	public:
		
		Rect(int a, int b)		//parameterized constructor
		{
			m = a;
			n = b;
			cout << "Constructor called " << endl;
		}
};	//end of Rect class

//define Distance class

class Distance
{
	private:

		int feet, inch;		//declaring private feet and inch data members 

	public:

		Distance(int a, int b)		//parameterized constructor.
		{
			feet = a;
			inch = b;
			cout << "Feet: "<< feet << " and Inch: " << inch << endl;
		}

		~Distance()		//Destructor
		{
			cout << "Object destroyed " << endl;
		}
};	//end of Distance class

int main()
{
	Rect r(10, 20);
	//cout << r.m << " , " << r.n << endl;

	int feet, inch;
	cout << "Enter feet and inch : ";
	cin >> feet >> inch;
	Distance d1(feet, inch);
	Distance d2(++feet, ++inch);	
	return 0;
}	//end of main function
