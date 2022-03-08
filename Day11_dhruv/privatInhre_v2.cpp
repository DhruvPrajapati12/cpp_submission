#include <iostream>
using namespace std;

class Base
{
    protected:

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

class Derived1 : private Base 
{
    int k;

    public:

        void setk()
        {
            k = i * j;
        }

        void showk()
        {
            cout << k << endl;
        }

};

class Derived2 : public Derived1
{
    int m;

    public:

        void setm()
        {
            // m = i - j;
        }

        void showm()
        {
            cout << m << endl;
        }
};

int main()
{
    Derived1 ob1;
    Derived2 ob2;

    // ob1.set(1,2);
    // ob1.show();

    // ob2.set(3,4);
    // ob2.show();
}