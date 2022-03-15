#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str, str2, str3;

    file.open("data.txt");

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())
        {
            file >> str >> str2 >> str3;
            cout << str << "\t" << str2 << "\t" << str3 << endl;
        }
    }

    file.close();
  return 0;
}