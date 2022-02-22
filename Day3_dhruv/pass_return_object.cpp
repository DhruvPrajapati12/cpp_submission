// Demonstration of passing two object and returning an object to the function.
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Calculator class

class Calculator
{
	public:
		
		int n1, n2;

		void setInput(int a, int b)		//setInput set the values of data members
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
};	//end of calculator class

int main()
{
	int a, b;	//declaring a and b variables
	cout << "Enter two numbers : ";
	cin >> a>> b;	//getting input of variable using cin
	Calculator obj1, obj2, obj3;		//creating objects of the class
	obj1.setInput(a,b);			
	obj2.setInput(50, 100);

	obj3 = obj1.add(obj1, obj2);	//calling add function, add function returns an object

	cout << obj1.n1 << " + " << obj2.n1 << " = " << obj3.n1 << endl;
	cout << obj1.n2 << " + " << obj2.n2 << " = " << obj3.n2 << endl;
	return 0;
}	//end of main function
