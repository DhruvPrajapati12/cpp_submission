// Demonstration of Constructor(Non parameterized).

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

class Demo
{
	int number;

	public:

		Demo()
		{
			cout << "Enter the number: ";
			cin >> number;
		}

		void getData()
		{
			cout << "Number: " << number << endl;
		}
};

class Area
{
	int width, length;

	public:

		Area()
		{
			width=10;
			length=20;
		}

		void calculate()
		{
			cout << "Area = " << width*length << endl;
		}
};

int main()
{
	Demo n1, n2;
	n1.getData();
	n2.getData();

	Area a, b;
	a.calculate();
	b.calculate();
}

