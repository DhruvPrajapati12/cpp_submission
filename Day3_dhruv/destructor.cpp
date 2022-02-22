//This code demonstrate the destructor and the parameterized construcor
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Distance class

class Distance
{
	private:

		int feet, inch;		//declaring private feet and inch variables 

	public:

		Distance(int a, int b)		//parameterized construcor
		{
			feet = a;
			inch = b;
			cout << "Feet: "<< feet << " and Inch: " << inch << endl;
		}

		~Distance()		//destructor
		{
			cout << "Object destroyed " << endl;
		}
};		//end of Distance class

int main()
{
	int feet, inch;
	cout << "Enter feet and inch : ";
	cin >> feet >> inch;		//getting feet and inch using cin
	Distance d1(feet, inch);	//creating object of class Distance
	return 0;
}	//end of main function
