// Demo code of write() function


#include <iostream>
#include <fstream>
using namespace std;

// Define student class

class student
{
    public:

        int roll;
        char name[25];
        float marks;

        void getData()  // getting the data of student class
        {
            cout << "Enter roll no and name" << endl;
            cin >> roll >> name;
            cout << "marks: " << endl;
            cin >> marks;
        }
};  // end of student class

void addRecord()
{
    fstream file;  // creating a file handlar object
    student stu;
    file.open("student.dat", ios::app | ios::binary);
    stu.getData();
    file.write((char *)&stu, sizeof(stu));  // syntax: file.write((char *)&obj, sizeof(obj))
    file.close();
}

void display()
{
    fstream file;
    student stu;
    file.open("student.dat", ios::in);

    while(!file.eof())
    {
        file.read((char *)&stu, sizeof(stu));
        cout << "Roll: " << stu.roll << " Name: " << stu.name << " Mark: " << stu.marks << endl;
    }

    file.close();

}

int main()
{
    addRecord();
    display();
    return 0;
}

// Write() function is used to writing an object data to the binary file 