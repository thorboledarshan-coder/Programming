#include<iostream>
using namespace std;

template<class T>

class Arithematic
{
    public:
      T No1;
      T No2;
      Arithematic(T A,T B)
      {
        this->No1 =A;
        this->No2 =B;
      }

      T Addition()
      {
        T Ans;
        Ans = No1+No2;
        return Ans;
      }

      T Substraction()
      {
        T Ans;
        Ans = No1-No2;
        return Ans;
      }
  
};
int main()
{
    Arithematic <int> aobj1(11,10);
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    Arithematic <double> aobj2(11.2345,10.1234);
    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";
    return 0;
}