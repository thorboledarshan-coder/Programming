#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo Arr[4];

    printf("Size of arr is : %lu\n",sizeof(Arr));   // 32

    Arr[0].i = 11;
    Arr[0].f = 11.0f;

    Arr[1].i = 21;
    Arr[1].f = 21.0f;

    Arr[2].i = 51;
    Arr[2].f = 51.0f;

    Arr[3].i = 101;
    Arr[3].f = 101.0f;

    printf("%d\n",Arr[2].i);    // 51
    printf("%f\n",Arr[1].f);    // 21.0
    
    return 0;
}