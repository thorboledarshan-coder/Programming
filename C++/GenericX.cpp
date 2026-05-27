#include<iostream>
using namespace std;

template<class X>       //template header

X Addition(X A,X B)
{
    X Ans;
    Ans = A+B;
    return Ans;
}


int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.3f,11.2f)<<"\n";
    cout<<Addition(10.34567,11.23456)<<"\n";
    return 0;
}