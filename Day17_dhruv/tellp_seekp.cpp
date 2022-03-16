// Demo code of tellp and seekp to get location of file pointer and change 
// Location of file pointer

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream outfile;   // creating a file handlar object

    outfile.open("datatest.txt", ios::out);

    cout << "starting file pointer: " << outfile.tellp() << endl;    // Getting the current write position.
    
    outfile << "This is my file";   // writing to a file
    long pos = outfile.tellp(); // Getting the current write position.
    cout << "current file pointer: " << pos << endl;
    outfile.seekp(pos + 6);     // Changing the current write position. 
    outfile << "Again my file"; // writing to a file
    outfile.close();
    cout << "Done" << endl;
    return 0;
}