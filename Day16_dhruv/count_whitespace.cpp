// Demo code of counting a number of white space

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;   // creating a file handlar object
    char ch;
    int count = 0;

    file.open("data.txt", ios::in);     // opening a file in reading mode

    if(!file)
    {
        cout << "File does not exist" << endl;
    }
    else 
    {
        while(!file.eof())
        {
            file.get(ch);
            if(ch == ' ')
                count++;
        }
    }
	cout << "Total whitespace " << count << endl;

    file.close();   // closing a file

  return 0;
}