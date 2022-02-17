//Implementation of Calculator

#include <iostream>
#include <cmath>
using namespace std;

//define class Calculator

class Calculator
{
	public:

		//declaring two variable of type integer		

		int input1;
		int input2;

		//set two variables using setInput() function

		void setInput(int a, int b)
		{
			input1 = a;
			input2 = b;
		}

		int setNumber(int n)
		{
			input1 = n;
			return input1;
		}

		//add() function returns addition of two numbers

		int add(Calculator n1, Calculator n2)
		{
			return n1.input1 + n2.input2;
		}

		//subtract() function returns the subtraction of two numbers

		Calculator subtract(Calculator n1, Calculator n2);

		//multiply() function returns the multiplication of two numbers

		int multiply()
		{
			return input1 * input2;
		}

		//divide() function returns the division of two numbers

		float divide()
		{
			return (float)input1 / (float)input2;
		}

		//modulo() function returns the modulo of two numbers

		int modulo()
		{
			return input1 % input2;
		}

		//factorial() function takes numbers as a input and returns its factorial

		int factorial(int n)
		{
			if(n == 0 || n == 1)
				return 1;
			else
				return n * factorial(n - 1);
		}

		//fibo() function returns the fibonacci series of given length

		void fibo()
		{
			int a = 1, b = 2, c;
			c = a + b;
			cout << a << " " << b << " " << c << " ";
			for(int i=0; i < input1-3;i++)
			{
				a = b;
				b = c;
				c = a + b;
				cout << c << " ";
			}
		}

		//power() function returns the number1^number2 of given numbers

		int power()
		{
			return pow(input1, input2);
		}
};

//defination of subtract function outside the class

Calculator Calculator::subtract(Calculator n1, Calculator n2)
{
	Calculator n;
	n.input1 = n1.input1 - n2.input2;
	return n;
}

int main()
{
	Calculator obj,obj2, obj3;          //Create objects of Calculator class
	//obj.setInput(10,20);	//seting the values of the object using setInput() function
	
	int op=0, n1, n2;       //declaring two numbers

	while(op<9)
	{
		cout << endl << "Enter 1 for addition: " << endl << "Enter 2 for subtraction: " << endl << "Enter 3 for multiplication: " << endl << "Enter 4 for division: " << endl << "Enter 5 for modulo: " << endl << "Enter 6 for factorial: " << endl << "Enter 7 for fibonacci: " << endl << "Enter 8 for x^y: " << endl << "Enter 9 for exit: " << endl ;
		cout << "Enter operation : ";
		cin >> op;

		switch(op)
		{
			case 1:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj2.setInput(n1, n2);
			obj.setInput(n1, n2);
			cout << "Addition of " << n1 << " and " << n2 << " is: " << obj.add(obj, obj2) << endl;
			break;

			case 2:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj2.setInput(n1, n2);
			obj.setInput(n1, n2);
			obj3 = obj.subtract(obj, obj2);
			cout << "Subtraction of " << n1 << " and " << n2 << " is: " << obj3.input1 << endl;
			break;

			case 3:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Multiplication of " << n1 << " and " << n2 << " is: " << obj.multiply() << endl;
			break;

			case 4:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Division of " << n1 << " and " << n2 << " is: " << obj.divide() << endl;
			break;

			case 5:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Modulo of " << n1 << " and " << n2 << " is: " << obj.modulo() << endl;
			break;

			case 6:
			cout << "Enter the number: ";
			cin >> n1;
			cout << "Factorial of " << n1 << " is: " << obj.factorial(obj.setNumber(n1)) << endl;
			break;

			case 7:
			cout << "Enter the number: ";
			cin >> n1;
			obj.setNumber(n1);
			cout << "Fibonacci of length " << n1 << " is: ";
			obj.fibo();
			break;

			case 8:
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			obj.setInput(n1, n2);
			cout << "Power of " << n1 << " rest to " << n2 << " is: " << obj.power() << endl;
			break;
		}
	}
	return 0;
}
