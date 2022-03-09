// Demo code of this pointer

#include <iostream>
using namespace std;

class Person
{
    int age;

    public:

        Person(int x)
        {
            age = x;
        }

        void display()
        {
            cout << "Age= " << age << endl;
        }

        Person olderperson(Person p)
        {
            if(age > p.age)
                return *this;  //this pointer is used to return reference to the calling object
            else 
                return p;
        }
};

class Sample
{
    int x, y;

    public:

        Sample& setX(int a)         //this pointer is used to return reference to the calling object
        {
            x = a;
            return *this;
        }

        Sample& setY(int a)
        {
            y = a;
            return *this;
        }

        void print() 
        {
            cout << "x = " << x ;
            cout << " y= " << y << endl;   
        }
};

int main()
{
    Person r(35), h(30);
    Person o = r.olderperson(h);
    o.display();

    Sample s;
    s.setX(12);
    s.setY(34);
    s.print();
}

//  When a binary operator overloaded,
// we pass only one argument to function.
//  The other argument is implicitly
// passed using this pointer.