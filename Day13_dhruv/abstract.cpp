// Demo of abstarct class

// Abstarct class 

// -> A class that contains at least one pure virtual function that is called absract
// -> You can  not create an object of an abstract class, you can create pointers and ref of abstarct class 

// Here we can call two way functions(Base pointer to base function, base pointer to child function)
// Its depend upon the ref we are giving ptr = &a;

#include <iostream>
using namespace std;

// Define convert class

class convert
{
protected:
    double val1;
    double val2;

public:
    convert(double i)
    {
        val1 = i;
    }
    double getconv()
    {
        return val2;
    }
    double getinit()
    {
        return val1;
    }
    virtual void compute()
    {
    }
};

// Define l_to_g class 

class l_to_g : public convert
{
public:
    l_to_g(double i) : convert(i)
    {
    }

    void compute()
    {
        val2 = val1 / 3.7854;
    }
};

// Define f_to_c class

class f_to_c : public convert
{
public:
    f_to_c(double i) : convert(i)
    {
    }

    void compute()
    {
        val2 = (val1 - 32) / 1.8;
    }
};

int main()
{
    convert *p;
    l_to_g lgob(4);
    f_to_c fcob(70);

    p = &lgob;
    cout << p->getinit() << "liters is:" << endl;
    p -> compute();     
    // ((l_to_g *)p)->compute();   // No use of pure virtual function
    cout << p->getconv() << "Gallon is:" << endl;

    p = &fcob;
    cout << p->getinit() << "In fahernenhit is:" << endl;
    p -> compute();
    // ((f_to_c *)p)->compute();   // No use of pure virtual function
    cout << p->getconv() << "celcius " << endl;

    return 0;
}