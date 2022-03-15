// Demo code of reading a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;   // creating a file handlar object
    string str, str2, str3;

    file.open("data.txt", ios::in); // opening a file in reading mode

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())
        {
            file >> str >> str2 >> str3;    // getting multiple word from file
            cout << str << "\t" << str2 << "\t" << str3 << endl;
        }
    }

    file.close();
  return 0;
}