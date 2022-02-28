// Demo code of basic type to basic type conversion.(Ex int -> float, int -> double)

//c++ provides mechanism to perform automatic type conversion if all variables are of basic type.
//for user defined data type programmers have to convert it by using constructor or by using
//  casting operator.

// ref: http://www.hexainclude.com/type-conversion/

// Types:
// 1. Basic to basic(Automatically)
// 2. Basic to class(using constructor)
// 3. class to basic(using casting operator overloading function)
// 4. class to class(using constructor or casting operator overloading function) 


// A type cast is basically a conversion from one type to another. There are two types of type conversion
// 1. Implicit conversion
// bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
// 2. Explicit conversion 

#include <iostream>
using namespace std;

int main()
{
    //1. Implicit conversion

    bool a = true;      //true=1, false=0
    char b = 'a';
    int c = b;
    float d = c;
    double e = c;
    cout << "a: " << a << " Size: " << sizeof(a) << "bytes" << endl;
    cout << "b: " << b << " Size: " << sizeof(b) << "bytes" << endl;
    cout << "c: " << c << " Size: " << sizeof(c) << "bytes" << endl;
    cout << "d: " << d << " Size: " << sizeof(d) << "bytes" << endl;
    cout << "e: " << e << " Size: " << sizeof(e) << "bytes" << endl;

    // 2. Explicit conversion 

    float f1 = 3.48;
    double d1 = 45.7895;
    int i1 = (int)f1;  //int i1 = f1
    int i2 = (int)d1;   //int i2 = d1
    cout << "f1: " << f1 << " Size: " << sizeof(f1) << "bytes" << endl;
    cout << "i1: " << i1 << " Size: " << sizeof(i1) << "bytes" << endl;
    cout << "d1: " << d1 << " Size: " << sizeof(d1) << "bytes" << endl;
    cout << "i2: " << i2 << " Size: " << sizeof(i2) << "bytes" << endl;

    int f,g;
    float h;
    f = 5;
    g = 2;
    h = (float)f/g;
    cout << h << " size: " << sizeof(h) << "bytes"  <<endl;

    int in = 10;
    float fl = 10.54;
    cout << (in=fl) << endl;
}   //end of main function

