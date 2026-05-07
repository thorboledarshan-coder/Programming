#include<iostream>
using namespace std;

class Base
{
    protected:
        int i,j;

    public:
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

int main()
{
    cout<<"Inside main\n";

    Derived dobj;

    cout<<"size of base class object is : "<<sizeof(Base)<<"\n";    // 8
    cout<<"size of derived class object is : "<<sizeof(Derived)<<"\n"; // 12

    //cout<<dobj.i<<"\n";     // Error
    //cout<<dobj.j<<"\n";     // Error
    cout<<dobj.x<<"\n";     // 0

    cout<<"End of main\n";
    
    return 0;
}