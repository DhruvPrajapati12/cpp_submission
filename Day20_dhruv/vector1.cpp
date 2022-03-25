// Demo code of Vector(Sequential Containers)
// 1. Vector -- array style(static)
// 2. Vector -- STL style(dynamic)

// STL -> Standard template Library 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v(10); // create a vector of length 10
    cout << "Size: " << v.size() << endl;   // displaying the size of vector v
    for(int i=0; i<10; i++)
    {
        v[i] = i + 'a';
    }

    cout << "Current contents: " << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Expanding vector" << endl;

    for(int i=10; i<20;i++)
    {
        v.push_back(i+'a');
    }

    cout << "Size now: " << v.size() << endl;

    cout << "Current contents: " << endl;

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i=0; i<v.size(); i++)
    {
        v[i] = toupper(v[i]);
    }

    cout << "Modified contnts: " << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

// Operations on vector
// -> Iterator begin();
// -> Iterator end();
// -> Bool empty();
// -> Void push_back(const T& x);
// -> Iterator erase (iterator it);
// -> Iterator erase(iterator first,iterator last);
// -> Void clear();