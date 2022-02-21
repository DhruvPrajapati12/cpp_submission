#include <iostream>
using namespace std;

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
	int feet, inch;
	cout << "Enter feet and inch : ";
	cin >> feet >> inch;
	Distance d1(feet, inch);	
	return 0;
}
