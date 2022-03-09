#include <iostream>
using namespace std;

class Test
{
    int mark;
    float spi;

public:
    void setData(int mark, float spi)
    {
        this->mark = mark;
        this->spi = spi;
    }
    void dis()
    {
        cout << "Marks =" << mark << endl;
        cout << "SPI =" << spi << endl;
    }
};

class Sample
{
    int a, b;

    public:
        
        void input(int a, int b)
        {
            this->a = a + b;
            this->b = a - b;
        }

        void output()
        {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

int main()
{
    Test t1;
    t1.setData(600, 9.5);
    t1.dis();

    Sample s;
    int a = 6, b = 5;
    s.input(a,b);
    s.output();
    return 0;
}