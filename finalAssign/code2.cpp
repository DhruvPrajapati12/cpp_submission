#include <iostream>
#include <string>
using namespace std;

class CharInput
{
    protected: string str = "";

    public:

        void add(char c)
        {
            str += c;
        }

        string getvalue()
        {
            return NULL;
        }
};

class numInput : public CharInput
{
    public:

        void add(char c)
        {
            
        }

        string getvalue()
        {
            return str;
        }
};

int main()
{
    numInput num;
    int n;
    char ch;

    cout << "Enter the number of times do you want to add: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter input: ";
        cin >> ch;

        if(ch >= '0' && ch <= '9')
        {
            num.CharInput::add(ch);
        }
    }

    cout << "String: " <<  num.getvalue() << endl;

  return 0;
}