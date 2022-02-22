//This code is for swapping two variables using call by value and call by reference.
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

void swap(int x, int y)		//call by value
{
	int temp = x;
	x = y;
	y = x;
}

void swapRef(int *x, int *y)		//call by reference
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int& maxAdd(int &x, int &y)		//call by reference
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int a=10,b=20;
	cout << "a: " << a << " b: " << b << endl;

	swap(a, b);		//calling swap function

	cout << "After call by value: " << endl;
	cout << "a: " << a << " b: " << b << endl;

	int ans = max(a,b);		//calling max function

	cout << "Maximum of " << a << " and " << b << " is " << ans << endl;

	swapRef(&a, &b);		//calling swapRef function
	
	cout << "After call by refrence: " << endl;
	cout << "a: " << a << " b: " << b << endl;
	
	ans = maxAdd(a,b);		//calling maxAdd function

	cout << "Maximum of " << a << " and " << b << " is " << ans << endl;
}	//end of main function


