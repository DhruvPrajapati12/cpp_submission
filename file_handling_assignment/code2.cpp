// 2: Count the number of words that has 'a' in them?

#include <iostream>
#include <fstream>
#include <string.h>
#include <exception>
using namespace std;

class newException : public exception   
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
    file.open("a.txt", ios::in);
    char str[20];
    int count = 0;

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
                for (int i = 0; i < strlen(str); i++)
                {
                    if (str[i] == 'a' || str[i] == 'A')
                    {
                        count++;
                        break;
                    }
                }
            }
        }
    }
    catch(exception &ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Number of words that contains 'a': " << count << endl;
    return 0;
}