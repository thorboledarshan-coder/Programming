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
    Derived *dp = NULL;
    Base bobj;

    dp = & bobj;    // Downcasting

    return 0;
}