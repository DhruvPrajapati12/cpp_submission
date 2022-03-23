// Demo code of Map container
// Author : Dhruv Prajapati 

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> m;
    cout << m.empty() << endl;
    map<char, int>::iterator p;

    // put pairs into map
    for(int i=0; i<26; i++)
    {
        m.insert(pair<char, int>('A'+i, 65+i));
    }

    char ch;
    cout << "Enter key(Upper case): ";
    cin >> ch;

    //find value given key
    p = m.find(ch);

    if(p == m.end())
    {
        cout << "Key not in map" << endl;
    }
    else
    {
        cout << "Its ASCII value: " << p->second << endl;
    }
    return 0;
}

// Maps

// ➤ The map class supports an associative container in which unique keys are 
//   mapped with values

// ➤ For example, you could define a map that uses a person's name as its key and stores that person's telephone number as its value.
// ➤ When a match is found, the value associated with the key is contained in the second member of pair.
// ➤ Duplicate keys are not allowed here, use multimap for that



// We can store class objects in the map
// This approach is more useful in practice
// Ex: a directory, list of employees in an organization etc.