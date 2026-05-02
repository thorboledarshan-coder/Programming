#include<stdio.h>

// Declaration
#pragma pack(1)
struct Demo
{
    int i;      // 4
    char ch;    // 1    Generates padding
    float f;    // 4
};              // 9

int main()
{
    struct Demo dobj;

    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 10.0f;

    printf("%d\n",dobj.i);  // 11
    printf("%c\n",dobj.ch); // A
    printf("%f\n",dobj.f);  // 10.0


    return 0;
}