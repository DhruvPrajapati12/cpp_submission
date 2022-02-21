// Demonstration of parameterized constructor.

#include <iostream>
using namespace std;

class Rect
{
	int m, n;

	public:
		
		Rect(int a, int b)
		{
			m = a;
			n = b;
			cout << "Constructor called " << endl;
		}
};

class Distance
{
	private:

		int feet, inch;

	public:
		Distance(int a, int b)
		{
			feet = a;
			inch = b;
			cout << "Feet: "<< feet << " and Inch: " << inch << endl;
		}

		~Distance()
		{
			cout << "Object destroyed " << endl;
		}
};

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
}
