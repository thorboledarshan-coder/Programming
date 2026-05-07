#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        Demo()
        {
            i = 0;
            j = 0;
            k = 0;
        }

        void Display()
        {
            cout<<"Value of i : "<<i<<"\n"; // Allowed
            cout<<"Value of j : "<<j<<"\n"; // Allowed
            cout<<"Value of k : "<<k<<"\n"; // Allowed
        }
};

int main()
{
    Demo dobj;

    dobj.Display();
            
    cout<<"Value of i : "<<dobj.i<<"\n";    // Allowed
    cout<<"Value of j : "<<dobj.j<<"\n";    // Not allowed
    cout<<"Value of k : "<<dobj.k<<"\n";    // Not allowed

    return 0;
}