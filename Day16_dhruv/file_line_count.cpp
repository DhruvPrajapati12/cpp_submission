// Demo code of count total number of line from a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;       // creating a object of a file
    string str;
    int count = 0;
    file.open("data.txt", ios::in); // opening a file in reading mode

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(getline(file, str))
        {
            count++;
        }
    }

    cout << "Total Line: " << count << endl;

    file.close();   // closing a file
  return 0;
}