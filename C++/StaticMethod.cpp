#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              // non static 
        int j;              // non static 
        static int k;       // static 

        Demo()
        {
            i = 0;
            j = 0;
        }

        void fun()      // non static method
        {
            cout<<"Inside non static fun\n";
            cout<<"i : "<<i<<"\n";
            cout<<"j : "<<j<<"\n";
            cout<<"k : "<<k<<"\n";
        }

        static void gun()   // static method
        {
            cout<<"Inside static gun\n";
            cout<<"k : "<<k<<"\n";
        }
};

int Demo :: k = 11;

int main()
{
    cout<<Demo::k<<"\n";        // 11

    Demo::gun();

    Demo dobj;

    cout<<dobj.i<<"\n";         // 0
    cout<<dobj.j<<"\n";         // 0

    dobj.fun();

    return 0;
}