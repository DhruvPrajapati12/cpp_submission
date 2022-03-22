#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<char> v(10);    // create a vector of length 10

    vector<char>::iterator p;   // create an iterator(pointer)

    int i;

    p = v.begin();
    i=0;

    // assign elements in vector a value
    while(p != v.end())
    {
        *p = i + 'a';
        p++;
        i++;
    }

    // for(int i=0; i<v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    cout << "Original contents: " << endl;
    p = v.begin();

    while(p != v.end())
    {
        cout << *p << " ";
        p++;
    }

    // changes the contents of vector
    p = v.begin();

    while(p != v.end())
    {
        *p = toupper(*p);
        p++;
    }

    cout << endl << "Modified contetnts: " << endl;
    p = v.begin();

    while(p != v.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;
  return 0;
}