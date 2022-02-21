// Demonstration of copy constructor.

#include <iostream>
using namespace std;

class Demo
{
	int x, y;

	public:

		Demo(int a, int b)       
		{
			x = a;
			y = b;
			cout << "Constructor is called." << endl;
		}

		Demo(Demo &d)
		{
			x = d.x;
			y = d.y;
			cout << "Copy constructor is called." << endl;
		}
};

int main()
{
	Demo d1(20, 30);
	Demo d2(d1);
}
