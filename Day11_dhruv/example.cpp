#include <iostream>

using namespace std;

class Base
{
    private:
        float f=45;
        
    public:
    
        int x=10,y=20,z=30;
        
        float getf()
        {
            return f;
        }
    
};

class Derived : public Base
{
    int k=12;
    
    public:
    
        int getData()
        {
            return k;
        }
};

int main()
{
    Derived d;
   
    
    cout << "Base x: " << d.x << endl;
    cout << "Base y: " << d.y << endl;
    cout << "Base z: " << d.z << endl;
    
    cout << "Base f: " << d.getf() << endl;
    
    cout << "Derived k: " << d.getData() << endl;
    // cout << "Base f: " << 

    return 0;
}
