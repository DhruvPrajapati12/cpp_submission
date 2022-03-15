// Demo code of coping a data from one file to the other file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file, file1;  // creating a two file handler object one for input file(reading) other for output file(writing)
    char ch;

    file.open("data.txt", ios::in); // opening a data.txt for reading
    file1.open("data1.txt", ios::out);  // opening a data1.txt file for writing

    
    while(!file.eof())
    {
        // file >> ch;
        // file1 << ch;  // OR file1 << ch;

        file.get(ch); 
        file1.put(ch);
    }
    
    cout << "Copy done" << endl;

    file.close();   // closing file
    file1.close();  // closing file2
  return 0;
}