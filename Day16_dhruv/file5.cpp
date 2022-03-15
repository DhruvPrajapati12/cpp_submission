#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str;
    int count = 0;

    file.open("data.txt");

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())
        {
            file >> str;
            count++;
        }
    }

    cout << "Total words: " << count << endl;

    file.close();
  return 0;
}