#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              // Chracteristics
        float f;            // Chracteristics

        Demo()              // Constructor
        {
            cout<<"Inside constructor";
            i = 0;
            f = 0.0f;
        }

        ~Demo()             // Destructor
        {
            cout<<"Inside destructor\n";
        }

        void fun()          // Behaviour
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    Demo dobj;          // Object creation

    cout<<"\n"<<dobj.i<<"\n";

    dobj.fun();
    
    cout<<"End of main\n";

    return 0;
}