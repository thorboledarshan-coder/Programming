#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter number : \n");
    scanf("%d",&No);
    if(No % 2 == 0)
    {
        printf("Its Even number\n");
    }
    else
    {
        printf("Its Odd number\n");
    }
    return 0;
}