#include<stdio.h>

void Display(int No1, int No2)
{
    printf("%d %d\n",No1,No2);
}

int main()
{
    int A = 11, B = 21;

    Display(A,B);       // Call by value

    return 0;
}