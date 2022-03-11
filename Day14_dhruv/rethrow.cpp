// Demo code of rethrow an exception

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
        try 
        {
            if(a == 2)
                throw a;
        }
        catch(int x)
        {
            cout << "Exception in inner try-catch block" << endl;
            a++;
            if(a == 3)
                throw a;
        }
        catch(...)
        {
            cout << "Exception" << endl;
        }
    }
    catch(int x)
    {
        cout << "Exception in outer try-catch block" << endl;
    }
    catch(...)
    {
        cout << "Exception" << endl;
    }
}   // end of main function

