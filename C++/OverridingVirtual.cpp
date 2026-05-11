#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {   cout<<"Inside Base fun\n";  }

        virtual void gun()
        {   cout<<"Inside Base gun\n";  }
        
        virtual void sun()
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

        virtual void run()      // Defination
        {   cout<<"Inside derived run\n";   }        
};  // 16 bytes

int main()
{
    Base *bp = new Derived();   // Upcasting

    bp->fun();      // Base fun
    bp->gun();      // Base gun
    bp->sun();      // Derived sun
    // bp->run();      // Error
   
    return 0;
}