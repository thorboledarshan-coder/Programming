#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        // Demo(Demo *this, int a, int b)
        Demo(int a, int b)
        {
            this->i = a;
            this->j = b;
        }

        // void Display(Demo * this)
        void Display()
        {
            cout<<this->i<<"\n";  // this->i
            cout<<this->j<<"\n";  // this->j
        }
};

int main()
{
    Demo dobj1(10,20);  // &dobj1 = 100
    Demo dobj2(50,60);  // &dobj2 = 200

    dobj1.Display();    // Display(&dobj1);     -> Display(100);    
    dobj2.Display();    // Display(&dobj2);     -> Display(200);

    return 0;
}