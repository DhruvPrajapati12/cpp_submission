#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v(10);    // create a vector of length 10

    vector<char>::iterator p;   // create an iterator(pointer)

    int i;

    cout << v.empty() << endl;

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

    p = v.begin();
    p++;
    v.insert(p, 3,'z');

    // cout <<"hi " << *p << "hi" <<endl;
    // p = v.begin();
    // p=p+2;
    // v.insert(p, 'z');

    // // p = v.begin();
    // p=p+3;
    // v.insert(p, 'z');

    cout << endl << "Modified contetnts: " << endl;
    p = v.begin();

    while(p != v.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;
    
    // v.erase(p);
    v.erase(v.begin(), v.end());
    // v.clear();
    cout << v.empty() << endl;

  return 0;
}