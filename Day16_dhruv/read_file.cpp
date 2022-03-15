// Demo code of reading a file data string by string

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str;

    file.open("data.txt", ios::in);     // file open in reading mode

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())  // Loop util the file pointer reach at the enf of file pointer
        {
            file >> str;
            cout << str << " ";
        }
    }
    file.close();   // closing the file
  return 0;
}