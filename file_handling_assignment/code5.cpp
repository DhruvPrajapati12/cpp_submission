// 5: Write a cpp program that shows a menu:
// 1: enter student detail 2: find student
// If the user selects 1: then it will ask for some details like: ID, student name, branch, Location. Save all these information in the file. Each student's details will be stored in one line.
// If the user selects 2: ask for the ID from the user that is needed to be searched. Then look for this id in the file (database). If it is available then return all the information about the particular student. If the ID is not available, then print some error message.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class student
{
public:
    int id;
    char name[20];
    char branch[20];
    char location[20];

    void addData()
    {
        student s;
        cout << "Enter the id: ";
        cin >> s.id;
        cin.ignore();
        cout << "Enter the name: ";
        cin.getline(s.name, 20);
        cout << "Enter the branch: ";
        cin.getline(s.branch, 20);
        cout << "Enter the location: ";
        cin >> s.location;

        fstream file;
        file.open("student.dat", ios::in | ios::app | ios::out);
        file.write((char *)&s, sizeof(s));
        file.close();

        cout << "Data added sucessfully" << endl;
    }

    void findData()
    {
        student s;
        fstream file;
        int id, flag=0;
        cout << "Enter the id: ";
        cin >> id;
        file.open("student.dat", ios::in | ios::app | ios::out);

        cout << "Your search result is: " << endl;

        while (!file.eof())
        {
            file.read((char *)&s, sizeof(s));
            if (id == s.id)
            {
                cout << "Id: " << s.id << " name: " << s.name << " branch: " << s.branch << " location: " << s.location << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "Error: Data does not exist" << endl;
        }

        file.close();
    }

    void displayData()
    {
        fstream file;
        student s;
        file.open("student.dat", ios::in | ios::binary);

        cout << "All student data is: " << endl;
        while(file.read((char *)&s, sizeof(s)))
        {
            cout << "Id: " << s.id << " name: " << s.name << " branch: " << s.branch << " location: " << s.location << endl;
        }
        
        file.close();
    }
};

int main()
{
    student s;
    int choice = 1;

    while(choice >= 1 && choice <=3)
    {

        cout << "\nEnter 1 for add data" << endl;
        cout << "Enter 2 for find data" << endl;
        cout << "Enter 3 for display all data" << endl;
        cout << "Enter 4 for exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            s.addData();
        }
        else if (choice == 2)
        {
            s.findData();
        }
        else if (choice == 3)
        {
            s.displayData();
        }
    }

    return 0;
}
