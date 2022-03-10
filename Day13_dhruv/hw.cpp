// Hw code

#include <stdio.h>
using namespace std;

// Define Base class

class Base
{
    int i;

    public:

        int j, k;

        void seti(int x)
        {
            i = x;
        }

        int geti()
        {
            return i;
        }
};

// Define Child class

class Child : private Base
{
    public:

        using Base::j;    // make j public again not k
        using Base::seti; // make seti public
        using Base::geti; // male geti public
        // Base::i; // error(because of private in base class)

        int a;

};

int main()
{
    Child o;

    // o.i = 10; // Error because i is private in dervied
    o.j = 20; //legal because j is made public in dervied
    // o.k = 30; //Error because i is private in dervied
    o.a = 40; //legal because a is public in dervied

    o.seti(10);     //legal because seti is made public in dervied
    o.geti();   //legal because geti is made public in dervied
}

// With the use of using Base:: we can change private members to the public