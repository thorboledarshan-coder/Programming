#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {   cout<<"Inside Base fun\n";  }

        void gun()
        {   cout<<"Inside Base gun\n";  }
        
        void sun()
        {   cout<<"Inside Base sun\n";  }        
};  // 8 bytes

class Derived : public Base
{
    public:
        int x,y;

        void fun()      // Redefination
        {   cout<<"Inside derived fun\n";   }

        void sun()      // Redefination
        {   cout<<"Inside derived sun\n";   }

        void run()      // Defination
        {   cout<<"Inside derived run\n";   }        
};  // 16 bytes

int main()
{
    Base *bp = NULL;

    bp = new Derived();     // upcasting

    bp->fun();  // Base fun
    bp->gun();  // Base gun
    bp->sun();  // Base sun
    // bp->run();  // Error

    return 0;
}