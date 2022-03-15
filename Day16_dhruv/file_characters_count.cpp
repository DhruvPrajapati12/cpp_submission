// Demo code of total number of characters in a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;   // creating a file handlar object
    int count = 0;
    char ch;
    file.open("data.txt", ios::in);     // opening a file in reading mode

    if(!file)   // checking file in open or not negative value means not opened
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())
        {
            file.get(ch);
            count++;
        }
    }

    cout << "Total characters: " << count << endl;

    file.close();   // closing a file
  return 0;
}