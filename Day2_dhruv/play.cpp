//Playing with public, private and protected access modifiers.
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

class Calculator
{
	public: 
		int n1,n2;

		void setInput(int a, int b)		//set input of the variables
		{
			n1 = a;
			n2 = b;
		}
	
		int add()		//add function returns the addition of two numbers
		{
			return n1+n2;
		}
	
		int subtract()	//subtract function returns the subtraction of two numbers
		{
			return add();
		}
};

//When we declare a private variables, we can access this variables in only in that class, We can not access this variables outside the class.

//When we declare a public variables, we can access this variables inside the class and ourside the class.

//When we declare a protected variables, we can access this variables in only in their child class.

int main()
{
	Calculator c;	//creating a object of the Calculator class
	c.setInput(50, 10);		//set input to the c object
	cout << c.add() << endl;	//calling add function
	cout << c.subtract() << endl;	//calling subtract function
}	//end of the main function

