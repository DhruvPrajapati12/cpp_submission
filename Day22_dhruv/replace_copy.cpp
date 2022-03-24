// Demo code of replace_copy() Algorithm
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

    replace_copy(v.begin(), v.end(), v2.begin(), ' ', ':');   // replace all space with :

    cout << "Result after replacing spaces with colons: ";
    for(int i=0; i<v2.size(); i++)
    {
        cout << v2[i];
    }
    cout << endl;

  return 0;
}   // end of main function