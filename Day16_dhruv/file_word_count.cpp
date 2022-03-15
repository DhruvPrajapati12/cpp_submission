// Demo code of total number of words in a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;   // creating a file handlar object
    string str;     // for storing a single word
    int count = 0;

    file.open("data.txt", ios::in);     // opening a file in reading mode

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())  // Or while(file >> str) no need to write file >> str in loop
        {
            file >> str;
            count++;
        }
    }

    cout << "Total words: " << count << endl;

    file.close();   // closing a file
  return 0;
}