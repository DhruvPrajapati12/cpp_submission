// Shallow copy and deep copy
// @author Dhruv Prajapati

#include <iostream>
using namespace std;

//define Shallow class

class Shallow
{
	int m, n;		//declaring private data members of Shallow class
	
	public:

		void setData(int a, int b)		//setData funcion set the values of data members
		{
			m=a;
			n=b;
		}

		void getData()		//getData function prints the value of data members
		{
			cout << m << " " << n << endl;
		}

		Shallow()		//default constructor
		{
			cout << "Object created" << endl;
		}

		Shallow(Shallow &d)		//copy constructor, It's take object as a argument
		{						//here shallow copy performed, by default shallow
			m = d.m;			//copy performed
			n = d.n;
		}
};		//end of Shallow class

//define Deep class

class Deep
{
	int m, n, *p;		//creating private data members of Deep class

	public:

		Deep()		//default constructor.
		{
			p = new int;
		}
		
		void setData(int a, int b, int c)		//parameterized constructor.
		{
			m=a;
			n=b;
			*p=c;
		}

		void getData()		//getData function print values of data member
		{
			cout << m << " " << n << " " << *p << endl;
		}

		Deep(Deep &d)		//copy constructor, here deep copy was performed
		{
			m = d.m;
			n = d.n;
			p = new int;
			*p = *(d.p);
		}

		~Deep()		//destructor
		{
			delete p;
		}
}; //end of Deep class

int main()
{
	Shallow d1;		//creating object of class Shallow
	d1.setData(20, 30);
	d1.getData();
	Shallow d2(d1);    //This copy is example of shallow copy

	//When we define Dummy d2(d1) then copy constructor called.
	//When we write Dummy d2; d2 = d1 then implicit copy assignment operator called.
	d2.getData();

	Deep de1;
	de1.setData(10, 20, 30);
	de1.getData();
	Deep de2(de1);
	de2.getData();
}	//end of main function
