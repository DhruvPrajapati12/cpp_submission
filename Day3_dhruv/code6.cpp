//• Write a program to find out sum of two private data members numA and numB of two classes ABC and XYZ using a common friend function. Assume that the prototype for both the classes will be int add(ABC, XYZ);

#include <iostream>
using namespace std;

class XYZ;

class ABC
{
	int numA=20;
	friend int add(ABC a, XYZ x);
};

class XYZ
{
	int numB=30;
	friend int add(ABC a, XYZ x);
};

int add(ABC a, XYZ x)
{
	return a.numA + x.numB;
}

int main()
{
	ABC a;
	XYZ x;

	cout << "Sum = " << add(a,x) << endl;
}
