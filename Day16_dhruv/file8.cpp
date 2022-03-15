#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file, file1;
    char ch;

    file.open("data.txt");
    file1.open("data1.txt");

    
    while(!file.eof())
    {
        // file >> ch;
        // file1 << ch;  // OR file1 << ch;

        file.get(ch);
        file1.put(ch);
    }
    
    cout << "Copy done" << endl;

    file.close();
    file1.close();
  return 0;
}