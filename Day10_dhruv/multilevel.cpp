// Demo code of multilevel Inheritance

#include <iostream>
using namespace std;

    // Person 
    //    |
    // Student
    //    |
    // ITStudent

// define class Person(Base class)

class Person
{
    public:

        int age=23, weight=45;      //declaring data member of Person class

        void eat()
        {
            cout << "Person is eating" << endl;
        }

        void talk()
        {
            cout << "Person is talking" << endl;
        }
};

// define Student class(Derived class)

class Student : public Person
{
    public:

        void studying()
        {
            cout << "Student is studing" << endl;
        }
};

// define ITStudent class(Derived class)

class ITStudent : public Student 
{
    public:

        void coding()
        {
            cout << "IT student is doing coding" << endl;
        }
};

int main()
{
    ITStudent i1;       //creating object of ITStudent classs
    Person p1;          //creating object of Person classs
    Student s;          //creating object of Student classs
    cout << "Age: " << i1.age << endl;  // Invoking parent class attributes from child class
    cout  << "Weight:  " << i1.weight << endl;  // Invoking parent class attributes from child class

    p1.eat();       
    p1.talk();      /

    s.talk();   //Invoking parent class method from child class
    s.eat();    //Invoking parent class method from child class
    s.studying();   

    i1.coding();    
    i1.studying();  //Invoking parent class method from child class
    i1.eat();       //Invoking parent class method from child class
    i1.talk();      //Invoking parent class method from child class

}   //end of main function