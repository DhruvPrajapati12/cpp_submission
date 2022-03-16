// Demo code of read() function

#include <iostream>
#include <fstream>
using namespace std;

// define student class

class student
{
    public:

        int roll;
        char name[25];
        float marks;

        void getData()
        {
            cout << "Enter roll no and name" << endl;
            cin >> roll >> name;
            cout << "marks: " << endl;
            cin >> marks;
        }

        void addRecord()
        {
            fstream f;
            student stu;
            f.open("student.dat", ios::app | ios::binary);
            stu.getData();
            f.write((char *)&stu, sizeof(stu));
            f.close();
        }

        void display()
        {
            fstream f;
            student s;

            f.open("student.dat", ios::in | ios::binary);

            while (!f.eof())
            {
                f.read((char *)&s, sizeof(s));
                cout << "Roll: " << s.roll << " Name: " << s.name << " Mark: " << s.marks << endl;
            }
            f.close();
        } // end of display()
};    // end of class

int main()
{
    student s1;
    // s1.getData();
    s1.addRecord();
    s1.display();
    return 0;
}