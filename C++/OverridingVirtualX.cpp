#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()          // 1000
        {   cout<<"Inside Base fun\n";  }

        virtual void gun()  // 2000
        {   cout<<"Inside Base gun\n";  }
        
        virtual void sun()  // 3000
        {   cout<<"Inside Base sun\n";  }        
};  // 8 bytes

class Derived : public Base
{
    public:
        int x,y;

        void fun()          // 4000      
        {   cout<<"Inside derived fun\n";   }

        void sun()          // 5000  
        {   cout<<"Inside derived sun\n";   }

        virtual void run()  // 6000
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