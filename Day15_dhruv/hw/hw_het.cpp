#include <iostream>
using namespace std;

class ABC // outer class starts
{

    void fun1() // private method of outer class
    {
        cout << "This is private function of outer class" << endl;
    }

    public:

        void fun2() // public method of outer class
        {
            cout << "This is public function of outer class" << endl;
        }

        class XYZ // inner class starts
        {
            void fun3() // private method of inner class
            {

                cout << "This is private function of inner class" << endl;
            }

            public:

                void fun4() // public method of outer class
                {
                    cout << "This is public function of inner class" << endl;
                }

                void check1() // checking if inner class can access public member of outer class		//success
                {
                    ABC ob;
                    ob.fun2();
                    cout << "inner class can access public member of outer class" << endl;
                }
                void check2() // checking if inner class can access private member of outer class		//success
                {
                    ABC ob;
                    ob.fun1();
                    cout << "inner class can access private member of outer class" << endl;
                }

        }; // inner class ends

        // void check3()		//checking if outer class can access private member of inner class			//fail
        // {
        //     XYZ ob1;
        //     ob1.fun3();
        //     cout << "outer class can access private member of inner class" << endl;
        // } 

        void check4() // checking if outer class can access public member of outer class			//success
        {
            XYZ ob1;
            ob1.fun4();
            cout << "outer class can access public member of inner class" << endl;
        }

}; // outer class ends

class PQR : public ABC // derived class from outer class
{
};

class DEF : public ABC ::XYZ // derived class from inner class
{
};

int main()
{
    ABC a;       // object of class ABC
    ABC ::XYZ x; // object of class XYZ
    PQR p;       // object of class PQR
    DEF d;       // object of class DEF

    x.check1(); // success
    x.check2(); // success
    // a.check3();		//failure
    a.check4(); // success

    d.fun4();   // success
    d.check1(); // success
    d.check2(); // success

    // p.fun4();		//failure
    //p.check4();         // success
    //p.fun2();           // success

    return 0;
}

// Conclusion

// In nesting of class , outer class can access public member of inner class but cna't access private member of inner class
// while inner class can access both public and private member of outer class

// when we derive any class from outer class, it can't access access public as well as privat member of inner class