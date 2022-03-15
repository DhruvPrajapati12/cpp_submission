#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str;

    file.open("data.txt");

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(getline(file, str))
        {
            cout << str << " ";
        }
    }

    file.close();
  return 0;
}