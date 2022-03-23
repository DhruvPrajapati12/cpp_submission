// Demo code of sorting and merging list container
// Author : Dhruv Prajapati 


#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst1, lst2;   // creating lst1 and lst2 empty list
    list<int>::iterator p;

    for(int i=0; i<10; i=i+2)
    {
        lst1.push_back(rand()%20);
    }

    for(int i=1; i<11; i=i+2)
    {
        lst2.push_back(rand()%20);
    }

    cout << "Conetens of lst1: ";
    p = lst1.begin();
    while(p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    cout << "Conetens of lst2: ";
    p = lst2.begin();
    while(p != lst2.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    cout << "sorted list1: ";
    lst1.sort();
    p = lst1.begin();
    while(p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // cout << "\nsorted list2: ";
    // lst2.sort();
    // p = lst2.begin();
    // while(p != lst2.end())
    // {
    //     cout << *p << " ";
    //     p++;
    // }
    // cout << endl;

    // merge list1 and list2 into list1
    lst1.merge(lst2);   // move elements of lst2 into lst1
    if(lst2.empty())
        cout << "lst2 is now empty" << endl;

    p = lst1.begin();
    while( p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;
    return 0;
}

// For merging 
// L1 and L2 List
// if both are sorted 
// then output will be sorted L1 
