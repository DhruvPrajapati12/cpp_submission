//Create a class student that stores roll_no,name.Create a class test that stores marks obtained 
// in five subjects. Class result derived from student and test contains the total marks and 
// percentage obtained in test. Input and display information of a student.

#include <iostream>
using namespace std;
#include <string.h>

// define class Student

class Student       //Parent class of Result class
{
    public:

        int rollNo;
        char name[20];
};

// define Test class

class Test      //Parent class of Result class
{
    public:

        int marks[5];
};

// define Result class

class Result : public Student, public Test      //Result class is inherited from Student and Test class(Multiple Inheritance)
{
    public:

        int total_marks;
        double percentage;
};

int main()
{
    Result r;   // Creating object of Result class
    // Student s;
    // Test t;

    r.rollNo = 21;
    strcpy(r.name, "Dhruv");

    cout << "Enter marks: ";
    
    for(int i=0; i<5; i++)      //for loop for taking input
    {
        cin >> r.marks[i];
    }

    r.total_marks = 0;

    for(int i=0; i<5; i++)      //for loop for sum of marks
    {
        r.total_marks+=r.marks[i];
    }

    r.percentage = double(r.total_marks) / 5;
    cout << "Name: " << r.name << endl;         //printing name
    cout << "Roll no: " << r.rollNo << endl;       //printing roll no
    cout << "Total marks: " << r.total_marks << endl;   //printing total marks
    cout << "Percentage: " << r.percentage << endl;     //printing percentage
}   //end of main function