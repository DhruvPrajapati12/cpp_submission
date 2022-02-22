// Demonstration on friend function
// @author Dhruv Prajapati

#include <iostream>
using namespace std;


//define Calc class

class Calc
{
	private:

		int i1, i2;			//declaring two private member of the Calc class

	public:

		void setInput(int a, int b)		//setInput function set the data mumbers of the Calc class
		{
			i1 = a;
			i2 = b;
		}

	private:

		friend void add();		//declaring friend function
};	//end of calc class

void add()
{
	Calc o;
	o.i1=20;
	o.i2=30;
	cout << o.i1 << " + " << o.i2 << " = " << o.i1+o.i2 << endl;
}	//end of add function

int main()
{
	int n1 = 20;
	int n2 = 30;
	Calc obj;
	obj.setInput(n1, n2);
	add();
}

