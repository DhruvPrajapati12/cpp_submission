#include <iostream>
using namespace std;

template <class T1, class T2>

class sample
{
    T1 a;
    T2 b;

    public:

        void getData()
        {
            cout << "Enter A & B " << endl;
            cin >> a >> b;
        }

        void display()
        {
            cout << "The value: " << endl;
            cout << "a: " << a << " b: " << b << endl;
            // cout << "typeof(a): " << typeof(a) << " typeof(b): " << typeof(b) << endl;
        }
};

int main()
{
    sample<int, int> s;
    sample<int, double> s1;
    sample<double, double> s2;

    cout << "Integer data: " << endl;
    s.getData();
    s.display();

    cout << "Integer and double data: " << endl;
    s1.getData();
    s1.display();

    cout << "double and double data: " << endl;
    s2.getData();
    s2.display();

  return 0;
}