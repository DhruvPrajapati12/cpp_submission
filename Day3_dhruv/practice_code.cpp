//• Write a program to find out sum of two private data members numA and numB of two classes ABC 
// and XYZ using a common friend function. Assume that the prototype for both the classes
// will be int add(ABC, XYZ);

// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//declaring XYZ class

class XYZ;

//definition of class ABC 

class ABC
{
	int numA=20;
	friend int add(ABC a, XYZ x);		//declaring add friend function
};

//definition of class XYZ

class XYZ
{
	int numB=30;
	friend int add(ABC a, XYZ x);		//declaring add friend function
};

int add(ABC a, XYZ x)			//definiton of friend function
{	
	return a.numA + x.numB;
}

int main()
{
	ABC a;		//creating object of ABC class
	XYZ x;		//creating object of XYZ class

	cout << "Sum = " << add(a,x) << endl;
}	//end of main function
