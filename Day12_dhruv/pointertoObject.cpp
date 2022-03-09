// Demo code of pointer to object

#include <iostream>
using namespace std;

// Define Demo class

class Demo
{
    int i;      // Declaring private data members
    public:

        Demo(int x)     // Parameterized constructor
        {
            i = x;
        }

        int getData()   //Getting the data
        {
            return i;
        }
};  // end of Demo class

int main()
{
    Demo d[4] = {55,66,77,88};  // Creating array of objects(Pass data to parameterized constructor)
    Demo *ptr = d;      // Pointing arrays 
    for(int i=0; i <4; i++)
    {
        cout << ptr -> getData() << endl;
        ptr++;
    }
}   // end of main function