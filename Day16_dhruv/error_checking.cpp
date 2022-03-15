// Demo code of file exist or not

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream myfile;
    myfile.open("file.txt", ios::in | ios::out);  // open file for reading and writing
    
    if(!myfile)   // If file does not exist
    {
        cout << "The file cannot open" << endl;
    }
    else 
    {
      cout << "File exist" << endl;
    }

    myfile.close();

  return 0;
}