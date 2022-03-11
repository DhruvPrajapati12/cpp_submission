// Demo code of exception handling

#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int a;
    cout << "Enter number: " << endl;
    cin >> a;

    try
    {
        if(a == 1)
            throw a;    // Throwing integer exception
        else if(a == 2)
            throw 'a';  // Throwing character exception
        else if(a == 3)
            throw 4.5;  // Throwing float exception
        else if(a == 4)
            throw 11111111111;  // Throwing long exception
    }

    catch(int x)
    {
        cout << "Integer" << endl;
    }

    catch(char c)
    {
        cout << "Character" << endl;
    }

    catch(double f)
    {
        cout << "Float" << endl;
    }

    catch(...)
    {
        cout << "Exception" << endl;
    }
    
    
}   // end of main function

// We can not catch float point. to catch float we need to use double in catch block

// If we can not catch a perticular type then this error is shown: 
// terminate called after throwing an instance of 'long'
// Aborted (core dumped)
