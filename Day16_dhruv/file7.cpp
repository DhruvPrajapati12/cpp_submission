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
        while(getline(file, str))
        {
            count++;
        }
    }

    cout << "Total Line: " << count << endl;

    file.close();
  return 0;
}