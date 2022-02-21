// Demonstration of default arguments

#include <iostream>
using namespace std;

int cube(int l, int b=20, int h=2)
{
	return l*b*h;
}

// Write a C++ program to create function sum(), that performs addition of 3
// integers also demonstrate Default Arguments concept.

int sum(int x, int y=10, int z=20)
{
	return (x+y+z);
}

int main()
{
	cout << cube(10) << endl;
	cout << cube(100) << endl;
	cout << cube(100, 200) << endl;
	cout << cube(100, 200, 4) << endl;

	cout << "Sum is : " << sum(5) << endl;
	cout << "Sum is : " << sum(5,15) << endl;
	cout << "Sum is : " << sum(5,15,25) << endl;
}

// -> while invoking a function If the argument/s are not passed then, the default values
// are used.
// -> We must add default arguments from right to left.
// -> We cannot provide a default value to a particular argument in the middle of an
// argument list.
// -> Default arguments are useful in situations where some arguments always have the
// same value.