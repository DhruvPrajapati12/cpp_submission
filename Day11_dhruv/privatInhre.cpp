#include <iostream>
using namespace std;

class Base
{
    int i, j;
    public:

        void set(int a, int b)
        {
            i = a;
            j = b;
        }

        void show()
        {
            cout << i << " " << j << endl;
        }
};

class Derived : public Base 
{
    int k;

    public:

        Derived(int x)
        {
            k = x;
        }

        void showk()
        {
            cout << k << endl;
        }

};

int main()
{
    // Base ob;
    // ob.set(1,2);
    // ob.show();

    Derived ob(3);
    ob.set(1,2);
    ob.show();
}