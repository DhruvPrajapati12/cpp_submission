// Demo code of namespace
// Author : Dhruv Prajapati

// Anything define within the namespace statement is within the scope of that namespace 

#include <iostream>
using namespace std;

namespace CounterNameSpace
{
    int upperbound;
    int lowerbound;

    class Counter
    {
        int count;

        public:

            Counter(int n)
            {
                if(n <= upperbound)
                    count = n;
                else
                    count = upperbound;
            }

            void reset(int n)
            {
                if(n <= upperbound)
                    count = n;
            }

            int run()
            {
                if(count > lowerbound)
                    return count--;
                else 
                    return lowerbound;
            }
    };  // end of Counter class
}
// using namespace CounterNameSpace;

int main()
{
    CounterNameSpace::upperbound = 100;
    CounterNameSpace::lowerbound = 0;
    CounterNameSpace::Counter ob1(10);

    int i;
    do 
    {
        i = ob1.run();
        cout << i << " ";
    }while(i > CounterNameSpace::lowerbound);
    cout << endl;

    CounterNameSpace::Counter ob2(20);
    do 
    {
        i = ob2.run();
        cout << i << " ";
    }while(i > CounterNameSpace::lowerbound);
    cout << endl; 

    ob2.reset(100);  
    CounterNameSpace::lowerbound = 90;
    do 
    {
        i = ob2.run();
        cout << i << " ";
    }while(i > CounterNameSpace::lowerbound);
    cout << endl;  

    return 0;
}

// -> A namespace defines scope
// -> The main purpose is to localize the names of identifiers to avoid name collisions
// -> Name collisions happens when two or more third-party libraries are used by the same program These libraries may have functions with the same name
// -> The C++ library is defined within its own namespace, called std

// ▸ A namespace must be declared outside of all other scopes
// ▸ This means that you cannot declare namespaces that are localized to a function for example
// ▸ There is however, one exception: a namespace can be nested within another