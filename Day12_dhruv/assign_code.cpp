// Create a class student having private members marks, name and public
// members rollno, getdata(), printdata(). Demonstrate concept of pointer to
// class members for array of 3 objects.

// Try creating pointer of the derived class and access the base class objects
// using it.

#include <iostream>
using namespace std;

class student
{
   //private members
   int marks;
   char name[20];

   public:

   int rollno;

   //getdata method
   void getdata()
   {
      cout << "Enter rollno: ";
      cin >> rollno;
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter marks: ";
      cin >> marks; 
   }

   //printdata method
   void printdata()
   {
      cout << "Roll no.: " << rollno << "\nName: " << name << "\nMarks: " << marks << endl;
   }
};

class child : public student
{
   
};

int main()
{

   // Here we access base class data members and member functions using dervied class pointer

   child *ptr;
   student s[3];
   ptr = (child*)s;

   for(int i=0;i<3;i++)
   {
      ptr->getdata();
      ptr++;
   }

   cout << "\nEmployee information\n" << endl;

   ptr=(child*)s; //set pointer to starting point of array

   for(int i=0;i<3;i++)
   {
      ptr->printdata();
      ptr++;
   }
   return 0;

   // student s[3];
   // student *ptr = s;
   // for(int i=0;i<3;i++)
   // {
   //    ptr->getdata();
   //     ptr++;
   // }
  
   // cout << "\nEmployee information\n" << endl;

   // ptr=s; //set pointer to starting point of array

   // for(int i=0;i<3;i++)
   // {
   //    ptr->printdata();
   //    ptr++;
   // }
   // return 0;
}
