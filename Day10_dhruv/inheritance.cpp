//Demo code of single inheritance

#include <iostream>
using namespace std;

// define Person class

class Person        //Base class
{
    public:

        int height=34, weight=55, age=21;   //declaring data members of Person class

        void walk()
        {
            cout << "Person is walking" << endl;
        }

        void talk()
        {
            cout << "Person is talking" << endl;
        }

    // public:
    //     int a1=34;
    //     void pub()
    //     {
    //         cout << "Inside public" << endl;
    //     }
    
    // private:
    //     int a2=344;
    //     void pri()
    //     {
    //         cout << "Inside private" << endl;
    //     }
    
    // protected:
    //     int a3=34;
    //     void pro()
    //     {
    //         cout << "Inside protected" << endl;
    //     }
};

// define Doctor class

class Doctor : public Person        //derived class
{
    public:

        void diagnose()
        {
            cout << "Doctor is doing diagonse" << endl;
        }
};

int main()
{
    Doctor d;   //creating object of Doctor class

    cout << "height: " << d.height << endl;     //Invoking parent class attributes from child class
    cout << "width: " << d.weight << endl;   //Invoking parent class attributes from child class
    cout << "Age: " << d.age << endl;    //Invoking parent class attributes from child class

    d.diagnose();      
    d.talk();        //Invoking parent class method from child class
    d.walk();    //Invoking parent class method from child class

    // d.pub();
    // d.pri();
    // d.pro();
}   //end of main function