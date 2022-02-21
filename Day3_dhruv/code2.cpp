// Demonstration of passing two object and returning an object to the function.

#include <iostream>
using namespace std;

class Calculator
{
	public:
		
		int n1, n2;

		void setInput(int a, int b)
		{
			n1 = a;
			n2 = b;
		}

		//Here, we are passing two objects as arguments

		Calculator add(Calculator c1, Calculator c2)
		{
			Calculator c;
			c.n1 = c1.n1 + c2.n1;
			c.n2 = c1.n2 + c2.n2;
			return c;
		}
};

int main()
{
	int a, b;
	cin >> a>> b;
	Calculator obj1, obj2, obj3;
	obj1.setInput(a,b);
	obj2.setInput(50, 100);

	obj3 = obj1.add(obj1, obj2);

	cout << obj1.n1 << " + " << obj2.n1 << " = " << obj3.n1 << endl;
	cout << obj1.n2 << " + " << obj2.n2 << " = " << obj3.n2 << endl;
	return 0;
}
