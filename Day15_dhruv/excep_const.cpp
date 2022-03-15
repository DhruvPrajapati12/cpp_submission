// Demo code of exception in constructuor and destructor

#include <iostream>
using namespace std;

class Devide        // Doubt
{
    int *x, *y;

    public:

        Devide()
        {
            x = new int;
            y = new int;
            cout << "Enter two number: " << endl;
            cin >> *x >> *y;
            try 
            {
                if(*y==0)
                {
                    throw *x;
                }
            }
            catch(int u)
            {
                delete x;
                delete y;
                cout << "second number can not be zero" << endl;
                throw u;
            }
        }

        ~Devide()
        {
            try 
            {
                delete x;
                delete y;
            }
            catch(...)
            {
                cout << "Error while deallocating memory" << endl;
            }
        }

        float devide()
        {
            return (float)*x / *y;
        }
};

int main()
{
    try 
    {
        Devide d;
        float res = d.devide();
        cout << "Result of devision: " << res;
    }
    catch(...)
    {
        cout << "Unknown exception" << endl;
    }

  return 0;
}
