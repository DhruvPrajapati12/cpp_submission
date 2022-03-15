#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string str;
    int count = 0;
    char ch;
    file.open("data1.txt");

    if(!file)
        cout << "File did not open" << endl;
    else 
    {
        while(!file.eof())
        {
            file.get(ch);
            count++;
        }
    }

    cout << "Total characters: " << count << endl;

    file.close();
  return 0;
}