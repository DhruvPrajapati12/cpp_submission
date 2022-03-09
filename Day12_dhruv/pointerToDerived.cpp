#include <iostream>
using namespace std;

class base
{
    public:

        void show()
        {
            cout << "This is show of base" << endl;
        }
};

class dervied : public base
{
    public:

        void dervided()
        {
            cout << "This is show of dervived" << endl;
        }
};

int main()
{
    base *ptr, *ptr1;
    base b;
    dervied d, *ptr2;

    ptr = &b;   // Base pointer point to base object
    ptr->show();

    ptr1 = &d;  // Base pointer point to derived object
    ptr1->show();
    ((dervied *)ptr1) -> dervided();

    // ptr2 = &b;
    // ptr2 -> show();
}