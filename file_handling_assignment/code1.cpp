// 1: Count the number of time the word 'the' is present in the file? 

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    fstream file;
    file.open("the.txt", ios::in);
    string str;
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
           if(str == "the")
           {
               count++;
           } 
        }
    }

    cout << "Number of 'the': " << count << endl;
    return 0;
}