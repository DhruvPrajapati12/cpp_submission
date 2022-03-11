// Demo code of Exception handling

// Exception handling -> Error 

// The process of converting system error message into human friendly message is called exception handling
// This is one of the most powerfull features of c++ to handle run time error and maintain the flow of program 

// Handling exception is nothing but converting system error message into user friendly message . Use three
// keywords for exception handling in c++
// 1. try
// 2. throw 
// 3. catch

#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int n1, n2, result;
    cout << "Enter number 1: " << endl;
    cin >> n1;
    cout << "Enter number 2: " << endl;
    cin >> n2;

    try
    {
        if(n2 == 0)
            throw n2;   // Throwing integer exception
        else 
        {
            result = n1 / n2;
            cout << "Result: " << result << endl;
        }

    }
    catch(int x)    // catching integer exception
    {
        cout << "cant devide by " << x << endl;
    }
}   // end of main function