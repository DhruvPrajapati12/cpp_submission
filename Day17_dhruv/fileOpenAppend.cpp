// Demo code of opening a file and appending data in it

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char line[100];
    fstream file;   // creating file handlar object
    file.open("data.txt", ios::out | ios::app);

    if(file.fail())
        cout << "file did not open" << endl;
    else 
    {
        cout << "Name" << endl;
        cin.getline(line, 100);     // cin >> line;
        file << line << endl;       // append
        cout << "Age" << endl;
        cin.getline(line, 100);     // cin >> line;
        file << line << endl;       // append
        cout << "file updated" << endl;
    }

  return 0;
}   // end of main function