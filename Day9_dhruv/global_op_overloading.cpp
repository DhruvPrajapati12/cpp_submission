// Demo code of global operator overloading

#include <iostream>
using namespace std;

class Demo
{
    int a, b;

    public:

        Demo()
        {
            a=0, b=0;
        }

        Demo(int x, int y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout << "a: " << a << " b: " << b << endl;
        }

        friend Demo operator+(Demo, Demo);
};

Demo operator + (Demo o1, Demo o2)
{
    Demo o;
    o.a = o1.a + o2.a;
    o.b = o1.b + o2.b;
    return o;
}

int main()
{
    Demo d1(5,3), d2(4,8);
    d1.display();
    d2.display();
    Demo d3;
    d3 = d1 + d2;
    //OR d3 = operator+(d1, d2);
    d3.display();
}
