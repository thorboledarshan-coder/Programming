#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};  // 8 bytes

class Derived : public Base
{
    public:
        int x,y;
};  // 16 bytes

int main()
{
    Base *bp = NULL;
    Derived dobj;

    bp = &dobj;     // upcasting

    return 0;
}