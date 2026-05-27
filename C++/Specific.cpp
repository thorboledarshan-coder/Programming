#include<iostream>
using namespace std;

int Addition(int A,int B)
{
    int Ans;
    Ans = A+B;
    return Ans;
}

float Addition(float A,float B)
{
    float Ans;
    Ans = A+B;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.3f,11.2f)<<"\n";
    return 0;
}