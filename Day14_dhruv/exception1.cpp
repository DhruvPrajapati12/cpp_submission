// Demo code of exception handling

#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter number 1: " << endl;
    cin >> n1;
    cout << "Enter number 2: " << endl;
    cin >> n2;

    try 
    {
        if(n2 != n1)
        {
            float div = (float)n1 / n2;
            if(div < 1)
                throw 'e';  // throw character exception
            if(div > 2)
                throw 4.3;  // throw float exception
            cout << "n1/n2= " << div << endl;
        }
        else 
        {
            throw n2;
        }
    }
    catch(char e)   // catch character exception
    {
        cout << "Exception: Division is less than 1" << endl;
    }
    catch(int x)    // catch integer exception
    {
        cout << "n1/n2= 1" << endl;
    }
    catch(...)
    {
        cout << "Exception: unknown " << endl;
    }
    
    
}   // end of main function

// If we can not handle pertucular type of exception in catch block then catch(...) will be called 
// Here we did not defined float exception then catch(...) is called