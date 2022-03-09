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
                return *this;
            else 
                return p;
        }
};

int main()
{
    Person r(35), h(30);
    Person o = r.olderperson(h);
    o.display();
}