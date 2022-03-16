// 3: Count the number of words that start with 'e'? 

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    fstream file;
    file.open("e.txt", ios::in);
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
               if(str[0] == 'e')
               {
                   count++;
                   break;
               }
           }
        }
    }

    cout << "Number of words that begins with 'e': " << count << endl;

    return 0;
}