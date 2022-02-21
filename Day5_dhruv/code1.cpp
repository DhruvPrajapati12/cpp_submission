//Demonstration of inline function 

// Inline Functions

// -> Every time a function is called it takes a lot of extra time to
// execute series of instructions such as
// ->  Jumping to the function
// ->  Saving registers
// ->  Pushing arguments into stack
// ->  Returning to the calling function
// -> If a function body is small then overhead time is more than actual
// code execution time so it becomes more time consuming.
// -> Preprocessor macros is a solution to the problem of small
// functions in C.
// -> In C++, inline function is used to reduce the function call
// overhead.

// Write a C++ program to create inline function that returns cube of
// given number (i.e n=3, cube=(n*n*n)=27).

#include <iostream>
using namespace std;

inline int cube(int x)
{
	return x*x*x;
}

int main()
{
	int a=5;
	cout << cube(a)<<endl;
}

// Some of the situations inline expansion may not work
// 1) If a loop, a switch or a goto exists in function body.
// 2) If function is not returning any value.
// 3) If function contains static variables.
// 4) If function is recursive.
