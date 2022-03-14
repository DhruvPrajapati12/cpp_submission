//This C++ programme demonstrates use of exception header file 
//and what() function in that header file for displaying standard Exceptions

#include <iostream>
#include <exception>
using namespace std;


int main()
{
    try 
    {
        int *ptr = new int[100];    //99999999999999999999      // Very large size provided in array index, so it will throw bad_allocate exception
    }
    catch(exception &e)
    {
        cout << "Std exception: " << e.what() << endl;
    }

    try 
    {
        int a = 0;
        int b = 45;
        int c;
        c = b / a;

        // int arr[3];
        // arr[4] = 67;
    }
    catch(exception &e)
    {
        cout << "Std exception: " << e.what() << endl;
    }
}   // end of main function