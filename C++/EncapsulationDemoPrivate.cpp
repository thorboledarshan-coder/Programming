#include<iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifier (By default private)

    int No1, No2;   // Characteristics

    void Fun()      // Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void Gun()      // Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    // Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;
    
    cout<<sizeof(mobj1)<<"\n";  // 8

    cout<<mobj1.No1<<"\n";  // Error

    mobj1.Fun();            // Error
    mobj2.Fun();            // Error

    mobj1.Gun();            // Error

    return 0;
}
