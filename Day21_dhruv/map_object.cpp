// Demo code of Storing Objects into map container

#include <iostream>
#include <map>
#include <string.h>
using namespace std;

class Name
{
    char str[40];

    public:

        Name()
        {
            strcpy(str, "");
        }

        Name(char *s)
        {
            strcpy(str, s);
        }

        char* get()
        {
            return str;
        }
};  // end of Name class

bool operator<(Name a, Name b)      // DOUBT
{
    return strcmp(a.get(), b.get()) < 0; // true/false
}

class PhoneNum
{
    char str[80];

    public:

        PhoneNum()
        {
            strcpy(str, "");
        }

        PhoneNum(char *s)
        {
            strcpy(str, s);
        }

        char *get()
        {
            return str;
        }
};  // end of PhoneNum class

int main()
{
    map<Name, PhoneNum> dir;
    map<Name, PhoneNum>::iterator p;

    // put names and numbers into map

    dir.insert(pair<Name, PhoneNum>(Name("Emp1"), PhoneNum("555-1111")));
    dir.insert(pair<Name, PhoneNum>(Name("Emp2"), PhoneNum("555-2222")));
    dir.insert(pair<Name, PhoneNum>(Name("Emp3"), PhoneNum("555-3333")));
    dir.insert(pair<Name, PhoneNum>(Name("Emp4"), PhoneNum("555-4444")));

    // given a Name, find number

    char str[80];
    cout << "Enter a Name: ";
    cin >> str;

    p = dir.find(Name(str));

    if (p == dir.end())
    {
        cout << "Name not in map" << endl;
    }
    else
    {
        cout << "Phone no: " << p->second.get() << endl;
    }
}