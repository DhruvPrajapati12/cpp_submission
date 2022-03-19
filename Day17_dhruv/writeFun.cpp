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

            // cin.ignore();
            // cout << "Enter name: ";
            // cin.getline(name, 20);   // including space
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

    while(file.read((char *)&stu, sizeof(stu)))
    {
        // file.read((char *)&stu, sizeof(stu));
        cout << "Roll: " << stu.roll << " Name: " << stu.name << " Mark: " << stu.marks << endl;
    }

    // when we use while(!file.eof()) then last object is printed twice 

    file.close();

}

int main()
{
    addRecord();
    display();
    return 0;
}

// Write() function is used to writing an object data to the binary file








// #include <iostream>
// #include <fstream>
// using namespace std;

// class student
// {
//   public:
  
//     int roll;
//     char name[20];
//     float marks;
    
//     void getData()
//     {
//         cout << "Enter roll no: ";
//         cin >> roll;
//         cout << "Enter name: ";
//         cin >> name;
//         cout << "Enter marks: ";
//         cin >> marks;
//     }
    
//     void addData()
//     {
//         student std;
//         fstream f;
//         f.open("student.dat", ios::app | ios::binary);
//         std.getData();
//         f.write((char *)&std, sizeof(std));
//         f.close();
//     }
    
//     void display()
//     {
//         student s;
//         fstream f;
//         f.open("student.dat", ios::in | ios::binary);
//         while(!f.eof())
//         {
//             f.read((char *)&s, sizeof(s));
//             cout<<"Roll "<<s.roll<< " Name " << s.name << " Mark: " << s.marks << endl;
//         }
        
//         f.close();
//     }
// };

// int main()
// {
//     student ss;
//     ss.addData();
//     ss.display();
// }