// Demo code of pointer

// Pointer is a variable that holds a memory address, of another variable.

// Pointer to pointer is a variable that holds a memory address, of
// another pointer variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int *p;
    p = &a;

    cout << "&a: " << &a << endl;       // print address of a
    cout << "p: " << p << endl;         // print address of a
    cout << "&p: " << &p << endl;       // print address of pointer
    cout << "*p: " << *p << endl;       // print value of a
    cout << "*(&a): " << *(&a) << endl; // print value of a
    (*p)++;                             // Increment a
    cout << "*p: " << *p << endl;       // 26
    cout << "a: " << a << endl;         // 26

    int b = 25;
    int *pt, **s;
    pt = &b;
    s = &pt;

    cout << "\n*pt:" << *pt;
    cout << "\n*s:" << *s;
    cout << "\n**s:" << **s;
    cout << "\n*(*(&pt)):" << *(*(&pt));
    cout << "\n***(&s):" << ***(&s);
} // end of main function

// int main()
// {
//     int arr[] = {10,20,30,40,50};
//     for(int i=0 ; i <5; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     int *ptr;
//     ptr = &arr[0] or arr;
    
//     for(int i=0; i < 5; i++)
//     {
//         cout << *(ptr + i) << " ";
//     }

//     return 0;
// }
