// Demo code of new[] and delete[] operator overloading

#include <iostream>
using namespace std;

//define class Location

class Location
{
    public:

        int lon, lat;   //declaration of data members

        Location()  //default constructor
        {
            cout << "Inside default constructor" << endl;
            lon = lat = 0;
        }

        Location(int x, int y)      //parameterized constructor
        {
            cout << "Inside Parameterized constructor" << endl;
            lon = x;
            lat = y;
        }

        ~Location()     //destructor
        {
            cout << "Inside destructor" << endl;
        }

        void display()  //displaying objects values
        {
            cout << "Longi: " << lon ;
            cout << " Lati: " << lat << endl;
        }

        void * operator new[](size_t size)    //overloading new[] operator
        {
            void *newObj;
            cout << "Size of object is: " << size << endl;
            cout << "Object created using overloaded new[] operator" << endl;
            newObj = malloc(size);
            if (newObj == NULL)
            {
                cout << "Object can not created." << endl;
            }
            return newObj;
        }

        void operator delete[](void * obj)    //overloading delete[] operator
        {
            cout << "Object deleted using overloaded delete[] operator" << endl;
            free(obj);
        }


};  //end of Location class

int main()
{
    // Location l1, l2(10,20); //created objects of Location class
    // l1.display();
    // l2.display();
    
    // Location *l3 = new Location[5];      // create a objects using default new[] operator 
    // for(int i = 0; i < 5; i++)
    // {
    //     l3[i].display();
    // }
    // delete [] l3;

    // Location *l3 = new Location[5];         //// create a objects using default new[] operator(parameterized objects)
    // for(int i=0; i<5; ++i)
    // {
    //     l3[i] = Location(20,30);
    // }
    // for(int i = 0; i < 5; ++i)
    // {
    //     l3[i].display();
    // }
    // delete [] l3;

    Location *l3 = new Location[5];         //created object using overloading new[] operator
    for(int i = 0; i < 5; i++)
    {
        l3[i].display();
    }
    delete [] l3;                              //deallocated memory to the object using overloading delete[] operator
}   // end of main function 