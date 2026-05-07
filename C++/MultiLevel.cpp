#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside derivedX destructor\n";
        }

        void sun()
        {
            cout<<"Inside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    DerivedX dobj;

    cout<<"size of base class object is : "<<sizeof(Base)<<"\n";    // 8
    cout<<"size of derived class object is : "<<sizeof(Derived)<<"\n"; // 12
    cout<<"size of derivedX class object is : "<<sizeof(DerivedX)<<"\n"; // 16

    cout<<dobj.i<<"\n";     // 0
    cout<<dobj.j<<"\n";     // 0
    cout<<dobj.x<<"\n";     // 0
    cout<<dobj.y<<"\n";     // 0

    dobj.fun();
    dobj.gun();
    dobj.sun();
    
    cout<<"End of main\n";
    
    return 0;
}