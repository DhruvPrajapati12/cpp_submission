// Demonstration on friend function

#include <iostream>
using namespace std;

class Calc
{
	private:

		int i1, i2;

	public:

		void setInput(int a, int b)
		{
			i1 = a;
			i2 = b;
		}
	private:
		friend void add();
};

void add()
{
	Calc o;
	o.i1=20;
	o.i2=30;
	cout << o.i1 << " + " << o.i2 << " = " << o.i1+o.i2 << endl;
}

int main()
{
	int n1 = 20;
	int n2 = 30;
	Calc obj;
	obj.setInput(n1, n2);
	add();
}

