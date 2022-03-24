// Demo code of remove copy algorithm
// Author : Dhruv Prajapati

#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    char str[] = "I Love C++ Programming";
    vector<char> v, v2(30);

    for(int i=0; i<strlen(str); i++)
    {
        v.push_back(str[i]);
    }

    cout << "Input sequence: ";
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;

    remove_copy(v.begin(), v.end(), v2.begin(), ' ');   // remove all space

    cout << "Result after removing spaces: ";
    for(int i=0; i<v2.size(); i++)
    {
        cout << v2[i];
    }
    cout << endl;

  return 0;
}

// -> Algorithms act on containers
// -> They also allow you to work with two different types of containers at the
//    same time
// -> Details about a large number of available algorithms is given inyour textbook, 
//    refer to that