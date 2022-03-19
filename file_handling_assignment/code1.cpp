// 1: Count the number of time the word 'the' is present in the file?

#include <iostream>
#include <fstream>
#include <string.h>
#include <exception>
using namespace std;

class newException : public exception // class of our own exception
{
public:
    const char *what() const throw()
    {
        return ("Exception: File does not exist");
    }
};

int main()
{
    fstream file;
    string str;
    int count = 0, len;

    file.open("the.txt", ios::in);

    try
    {
        if (file.fail())
        {
            newException err;
            throw err;
        }
        else
        {
            while (!file.eof())
            {
                file >> str;
                len = str.length();
                for (int i = 0; i < len; i++)
                {
                    str[i] = tolower(str[i]);
                }
                if (str == "the")
                {
                    count++;
                }
            }
        }
    }
    catch (exception &ex)
    {
        cout << ex.what() << endl;

        file.open("the.txt", ios::out);
        file << "The word the hello dhruv\nthe exception class The next generation code\n with out the normal flow of execution the .";
        file.close();
    }

    cout << "Number of 'the': " << count << endl;
    return 0;
}