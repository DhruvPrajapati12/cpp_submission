// 4: Count the number of words that end with 's'? 

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    fstream file;
    file.open("s.txt", ios::in);
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
               if(str[strlen(str)-1] == 's')
               {
                   count++;
                   break;
               }
           }
        }
    }

    cout << "Number of words that end with 's': " << count << endl;

    return 0;
}