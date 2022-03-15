// Demo of reading a file line by line

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str;

    file.open("data.txt", ios::in);     // opening a file for reading 

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(getline(file, str))   // getline function reading a each line from file and store it in str string
        {
            cout << str << endl;
        }
    }

    file.close();   // closing a file
  return 0; 
}