#include <iostream>
using namespace std;

void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = x;
}

void swapRef(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int& maxAdd(int &x, int &y)
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

	swap(a, b);

	cout << "After call by value: " << endl;
	cout << "a: " << a << " b: " << b << endl;

	int ans = max(a,b);

	cout << "Maximum of " << a << " and " << b << " is " << ans << endl;

	swapRef(&a, &b);
	
	cout << "After call by refrence: " << endl;
	cout << "a: " << a << " b: " << b << endl;
	
	ans = maxAdd(a,b);

	cout << "Maximum of " << a << " and " << b << " is " << ans << endl;
}	


