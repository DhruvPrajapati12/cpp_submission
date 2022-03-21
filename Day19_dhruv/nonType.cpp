// Demo code of non type template argument

// we can pass non type arguments to templates 
// Type arg:   generic 
// Non type arg: int, char etc

#include <iostream>
using namespace std;

template <class T, int N>

class mysequence{

    T arr[N];

    public:

        void setmember(int x, T value)
        {
            arr[x] = value;
        }

        T getmember(int x)
        {
            return arr[x];
        }
};

int main()
{
    mysequence<int, 5> myint5;
    mysequence<double, 5> mydouble5;

    myint5.setmember(0, 100);
    mydouble5.setmember(3,3.14);

    cout << myint5.getmember(0) << endl;
    cout << mydouble5.getmember(3) << endl;
    return 0;
}
