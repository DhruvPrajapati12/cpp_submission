// Demo code of function template specialization

// What if we want a different code for a perticular data type?

// In sort() task, we want to use same sort function for int, long, float, double, etc
// but a dufferent sort() for char.

// This is solved using template specialization

// template <class T>
// void sort(T arr[], int size)
// {
//     // any sorting scheme
// }

// template<>
// void sort<char>(char arr[], int size)
// {
//     // sorting for char data type
// }

#include <iostream>
using namespace std;

template <class T>
void swap(T *n1, T *n2)
{
    T ans;
    ans = *n1;
    *n1 = *n2;
    *n2 = ans;
}

// override the generic version of swap() for int

void swap(int *n1, int *n2)
{
    int ans;
    ans = *n1;
    *n1 = *n2;
    *n2 = ans;
    cout << "Inside int specialization" << endl;
}

int main()
{
    int a = 20; 
    int b = 30;
    cout << "Before swapping a: " << a << " b: " << b << endl;
    swap(&a, &b);   // called swap(int , int) function
    cout << "After swapping a: " << a << " b: " << b << endl;

    float a1 = 2.2; 
    float b1 = 3.3;
    cout << "Before swapping a: " << a1 << " b: " << b1 << endl;
    swap(&a1, &b1);     // called generic swap() function
    cout << "After swapping a: " << a1 << " b: " << b1 << endl;

    string a2 = "dhruv"; 
    string b2 = "het";
    cout << "Before swapping a: " << a2 << " b: " << b2 << endl;
    swap(&a2, &b2);     // called generic swap() function
    cout << "After swapping a: " << a2 << " b: " << b2 << endl;

  return 0;
}

// Template specialization complile time

// When we write any template based function or class, compliler creates a copy of 
// that function/ class whaenevere compiler sees that being used for a new data type 

// If a specialized version is present, compiler first checks with the specialized 
// version and then goes for template 

// Compiler first check with the most specialized version by matching the passed parameters
// with the data types specified in a specialized version 