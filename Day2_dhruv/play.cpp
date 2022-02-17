//Playing with public, private and protected access modifiers.

#include <iostream>
using namespace std;

class Calculator
{
	public: 
		int n1,n2;

		void setInput(int a, int b)
		{
			n1 = a;
			n2 = b;
		}
	
		int add()
		{
			return n1+n2;
		}
	
		int subtract()
		{
			return add();
		}
};

//When we declare a private variables, we can access this variables in only in that class, We can not access this variables outside the class.

//When we declare a public variables, we can access this variables inside the class and ourside the class.

//When we declare a protected variables, we can access this variables in only in their child class.

int main()
{
	Calculator c;
	c.setInput(50, 10);
	cout << c.add() << endl;
	cout << c.subtract() << endl;
}

