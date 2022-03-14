// Exception thrown from outside the try block(Jugadu method)
//This C++ programme demonstartes how to use throw keyword outside try block

#include <iostream>
#include <exception>
using namespace std;

void Xtest(int test)
{
    cout << "Inside xtest, test is: " << test << endl;
    if(test) throw test;        //throw outside try block
}

int main()
{
    cout << "Start" << endl;
    try 
    {
        cout << "Inside try block" << endl;
        Xtest(0); 
        Xtest(1); 
        Xtest(2);   // skipped
        //Here, Xtest(1) function throws integer text,So catch block will be 
        // executed, But after that, control will be at after block, so Xtest(2) won't be executed
    }
    catch(int i)
    {
        cout << "Caught an exception -- value is " << i << endl;
    }

    cout << "End" << endl;
}   // end of main function

// An exception can be thrown from outside the try block only if the function 
// throwing the exception is called from within the block