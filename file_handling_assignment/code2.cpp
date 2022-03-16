// 2: Count the number of words that has 'a' in them? 

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    fstream file;
    file.open("a.txt", ios::in);
    char str[20];
    int count = 0;

    if(file.fail())
    {
        cout << "Error: File does not exist" << endl;
    }
    else 
    {
        while(!file.eof())
        {
           file >> str;
           for(int i=0; i<strlen(str); i++)
           {
               if(str[i] == 'a')
               {
                   count++;
                   break;
               }
           }
        }
    }

    cout << "Number of words that contains 'a': " << count << endl;
    return 0;
}