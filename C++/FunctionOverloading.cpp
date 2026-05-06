#include<iostream>
using namespace std;

class Hello
{
    public:
        int AdditionTwo(int a, int b)
        {
            return a+b;
        }
        int AdditionThree(int a, int b, int c)
        {
            return a+b+c;
        }
        int AdditionFour(int a, int b, int c, int d)
        {
            return a+b+c+d;
        }
};

int main()
{
    Hello hobj;

    cout<<hobj.AdditionTwo(10,20)<<"\n";
    cout<<hobj.AdditionThree(10,20,30)<<"\n";
    cout<<hobj.AdditionFour(10,20,30,40)<<"\n";
    
    return 0;
}