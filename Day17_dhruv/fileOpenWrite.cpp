// Demo code of opening a file and writing in it

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream oFile;   // creating file handlar object

    oFile.open("data.txt", ios::out);   // opening a file in writing mode

    if(oFile.fail())
    {
        cout << "File does not exist" << endl;
        return 0;
    }
    
    oFile << "Line one in the document" << endl;  // writing into a file
    oFile << "Another line" << endl;  // writing into a file

    cout << "To the terminal" << endl;
    oFile.close();

  return 0;
} // end of main function
