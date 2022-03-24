// Demo code of reverse
// Author : Dhruv Prajapati

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    list<int> arr;
    list<int>::iterator p;

    for(int i=0; i<21; i++)
    {
        arr.push_back(i);
    }

    p = arr.begin();
    cout << "Original list: ";
    while(p != arr.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    arr.reverse();  // reverse the list

    p = arr.begin();
    cout << "Reverse list: ";
    while(p != arr.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    return 0;
}