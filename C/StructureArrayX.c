#include<stdio.h>

struct Hello
{
    float f;        // 4
    int Arr[3];     // 12
}hobj;              // 16

int main()
{
    hobj.f = 10.0f;

    hobj.Arr[0] = 11;
    hobj.Arr[1] = 21;
    hobj.Arr[2] = 51;
    
    printf("%f\n",hobj.f);

    printf("%d\t%d\t%d\n",hobj.Arr[0],hobj.Arr[1],hobj.Arr[2]);

    return 0;
}