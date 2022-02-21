// Shallow copy and deep copy

#include <iostream>
using namespace std;

class Shallow
{
	int m, n;
	
	public:

		void setData(int a, int b)
		{
			m=a;
			n=b;
		}

		void getData()
		{
			cout << m << " " << n << endl;
		}

		Shallow()
		{
			cout << "Object created" << endl;
		}

		Shallow(Shallow &d)
		{
			m = d.m;
			n = d.n;
		}
};		

class Deep
{
	int m, n, *p;

	public:

		Deep()
		{
			p = new int;
		}
		
		void setData(int a, int b, int c)
		{
			m=a;
			n=b;
			*p=c;
		}

		void getData()
		{
			cout << m << " " << n << " " << *p << endl;
		}

		Deep(Deep &d)
		{
			m = d.m;
			n = d.n;
			p = new int;
			*p = *(d.p);
		}

		~Deep()
		{
			delete p;
		}
};

int main()
{
	Shallow d1;
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
}
