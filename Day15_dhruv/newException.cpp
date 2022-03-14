// Demo code of defining your own exception

// We can define your own exception by inheriting and overriding exception class
// functiality

#include <iostream>
#include <exception>
using namespace std;

class newException : public exception   // class of our own exception
{
public:
    const char *what() const throw()    // doubt
    {
        return ("Divide by zero error!");
    }
};
int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    try
    {
        if (y == 0)
        {
            newException err;   // creating an object of new exception
            throw err;
        }
        else
            cout << x / y << endl;
    } // end of try

    catch (exception &e)
    {
        cout << e.what();
    }

    return 0;
}   // end of main function