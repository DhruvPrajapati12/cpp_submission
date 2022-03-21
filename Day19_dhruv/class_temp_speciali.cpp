// Demo code of class template specialization

#include <iostream>
using namespace std;

template <class T>

class Demo
{
    T a = 23.34;

        public:

            Demo()
            {
                cout << a << endl;
            }
};

template <>
class Demo<int>
{
    int a = 23.34;

    public:

        Demo()
        {
            cout << "Speicalization: " << a << endl;
        }
};
int main()
{

    Demo<int> a;
    Demo<int> a1;
    Demo<double> b;
    Demo<double> b1;
  return 0;
}

// template function sepcialization

// #include <iostream>
// using namespace std;

// template <class T>
// void fun(T a)
// {
// cout << "The main template fun(): "
// 		<< a << endl;
// }

// template<>
// void fun(int a)
// {
// 	cout << "Specialized Template for int type: "
// 		<< a << endl;
// }

// int main()
// {
// 	fun<char>('a');
// 	fun<int>(10);
// 	fun<float>(10.14);
// }
