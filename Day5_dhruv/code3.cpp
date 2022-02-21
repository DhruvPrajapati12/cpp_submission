// Demonstration of function overloading

#include <iostream>
using namespace std;

int sum(int i)
{
	return i;
}

float sum(double i)
{
	return i;
}

int sum(int i, int j)
{
	return (i+j);
}

int sum(int i, int j, int k)
{
	return (i+j+k);
}

double sum(int i, int j, double k)
{
	return (i+j+k);
}

int sum(int i, float j)
{
	return (i+j);
}

float sum(double i, double j)
{
	return (i+j);
}

int main()
{
	cout << "Sum: " << sum(1) << endl;
	cout << "Sum: " << sum(1.0) << endl;
	cout << "Sum: " << sum(1,2) << endl;
	cout << "Sum: " << sum(1,2,3) << endl;
	cout << "Sum: " << sum(1,2,3.2) << endl;
	cout << "Sum: " << sum(1,2.f) << endl;
	cout << "Sum: " << sum(5.0,10.5) << endl;
}


// Function overloading

//Function overloading means same function with different number of parameters.

// • Function overloading does not depend on return type.
// ->  C++ provides function overloading which allows to use multiple functions
// sharing the same name .
// ->  Function overloading is also known as Function Polymorphism in OOP.
// ->  It is the practice of declaring the same function with different signatures.

// ->  However, the two functions with the same name must differ in at least one of the
// following,
// ->  The number of arguments
// ->  The data type of arguments
// ->  The order of appearance of arguments