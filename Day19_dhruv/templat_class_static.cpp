// Demo code of class templates and static variables
// Author Dhruv Prajapati
// The rule of class templates is similar to that of function templates 

// Each instance of class templates will have its own copy of member static variables 
// int has its own copy of static local variable, double has its own 

#include <iostream>
using namespace std;

template <class T1>

class demo
{
    public:

        // demo()
        // {
        //     static T1 a = 20.2;
        //     cout << "a: " << ++a << endl;
        // }

        void print()
        {
            static T1 a = 20.2;
            cout << "a: " << ++a << endl;
        }

};  // end of demo class

int main()
{

    demo<int> a;
    demo<int> b;
    demo <double> c;
    demo<int> d;
    demo<double> e;

    a.print();
    b.print();
    c.print();
    d.print();
    e.print();


    return 0;
}

// The rule for the class template is similar to that of function templates
// Each instance of the class template will have its own copy of member static variables