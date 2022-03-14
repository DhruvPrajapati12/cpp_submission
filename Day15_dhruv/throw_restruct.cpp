//This C++ programme demonstarates how to restrict functions to throw only certain type of Exception(in terms of datatypes)

#include <iostream>
#include <exception>
using namespace std;

void demo() throw(int, double)  // this function can throw exception of type int and double
{
    int a;
    cout << "Enter the number: " << endl;
    cin >> a;

    if (a == 1)
        throw a; // throwing integer exception
    else if (a == 2)
        throw 'A'; // throwing character exception
    else if (a == 3)
        throw 4.5; // throwing float exception
}   // end of demo function

int main()
{

    try
    {
        demo();
    }
    catch (int n)
    {
        cout << "Int exception caught" << endl;
    }
    catch(double d)
    {
        cout << "Double exception caught" << endl;
    }
    catch(char d)
    {
        cout << "character caught" << endl;
    }
    catch(...)
    {
        cout << "unknown exception caught" << endl;
    }
}   // end of main function

// terminate called after throwing an instance of 'char'
// Aborted (core dumped) -------------------------Error because we have restricted demo function to throw only int and double