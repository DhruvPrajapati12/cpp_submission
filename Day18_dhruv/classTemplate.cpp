#include <iostream>
using namespace std;

template <class T>

class Demo
{
    public:

        T add(T n1, T n2)
        {
            T ans;
            ans = n1 + n2;
            return ans;
        }
};

int main()
{

    Demo<int> obj1;
    Demo<long> obj2;
    
    int a = 10, b = 20, c;
    long A = 11, B = 22, C;

    c = obj1.add(a, b);
    cout << "Sum of int: " << c << endl;

    C = obj2.add(A, B);
    cout << "Sum of long: " << C << endl;

    return 0;
}