// Demo code of tellp and seekp to get location of file pointer and change 
// Location of file pointer

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream outfile;   // creating a file handlar object

    outfile.open("datatest.txt", ios::out);   // opening a file in writing mode

    cout << "starting file pointer: " << outfile.tellp() << endl;   // Getting the current write position.
    outfile << "This is my file";   // writing to the file
    long pos = outfile.tellp();
    cout << "current file pointer: " << pos << endl;
    // outfile.seekp(pos - 2);
    outfile.seekp(pos + 6); // Changing the current write position.

    outfile << "Again my file"; // writing to the file
    outfile.seekp(0, ios::beg); // set pointer at beginning
    outfile << "Hello dhruv ";  // writing to a file

    outfile.seekp(0, ios::end); // set pointer at end
    outfile << " Hello dhruv "; // writing to a file

    outfile.seekp(-6, ios::cur);    // set pointer at current position
    outfile << "om ";   // writing to a file

    outfile.close();
    cout << "Done" << endl;
    return 0;
}