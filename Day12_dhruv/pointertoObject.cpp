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
    Demo d[] = {55,66,77,88};  // Creating array of objects(Pass data to parameterized constructor)
    Demo *ptr = d;  // OR  = &d[0]     // Pointing to the array 
    for(int i=0; i <4; i++)
    {
        cout << ptr -> getData() << endl;
        ptr++;
    }
}   // end of main function

//  When a pointer incremented it
// points to next element of its type.
//  An integer pointer will point to the
// next integer.
//  The same is true for pointer to
// objects.