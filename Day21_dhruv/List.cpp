// Demo code of List Container
// Author : Dhruv Prajapati

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;  // create an empty list

    cout << lst.empty() << endl;

    list<int>::iterator p;

    for(int i=0; i<10; i++)
    {
        lst.push_back(i);   
    }

    cout << "Size: " << lst.size() << endl;
    cout << "Contents: ";

    p = lst.begin();
    while(p != lst.end())
    {
        cout << *p << " ";
        p++;
    }

    p = lst.begin();
    while(p != lst.end())
    {
        *p = *p + 100;
        p++;
    }

    cout << endl << "Contents modified: ";
    p = lst.begin();
    while(p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    // p--;
    // p--;

    // p++;
    // p++;
    cout << endl;
    // cout << *p << endl;

    cout << "reverse: ";
    p = lst.end();      // end pointer point to size value of an list
    // cout << *p << endl;
    while(p != lst.begin())
    {
        p--;
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}

// In any type of container iterator end points at the size of container