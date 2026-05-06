#include<iostream>
using namespace std;

class Hello
{
    public:

        // Addition@2ii
        int Addition(int a, int b)
        {
            return a+b;
        }

        // Additoin@3iii
        int Addition(int a, int b, int c)
        {
            return a+b+c;
        }

        //Addition@4iiii
        int Addition(int a, int b, int c, int d)
        {
            return a+b+c+d;
        }
};

int main()
{
    Hello hobj;

    cout<<hobj.Addition(10,20)<<"\n";
    cout<<hobj.Addition(10,20,30)<<"\n";
    cout<<hobj.Addition(10,20,30,40)<<"\n";
    
    return 0;
}

/*
    // Case 1
    int Addition(int, int)              Addition@2ii
    int Addition(int, int, int)         Addition@3iii

    // Case 2
    int Addition(int, int)              Addition@2ii
    float Addition(float, float)        Addition@2ff

    // Case 3
    void Addition(int, float)           Addition@2if
    void Addition(float, int)           Addition@2fi


    // Not allwoed
    int Addition(int , int)
    void Addition(int , int)
    
*/