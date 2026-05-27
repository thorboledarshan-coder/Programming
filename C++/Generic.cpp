#include<iostream>
using namespace std;

template<class T>       //template header

T Addition(T A,T B)
{
    T Ans;
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