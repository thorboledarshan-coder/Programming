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
    Arithematic aobj(11,10);         //Error
    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Substraction()<<"\n";
    return 0;
}