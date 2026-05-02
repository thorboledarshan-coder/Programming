#include<stdio.h>

// Declaration
struct Demo
{
    int i;      // 4
    float f;    // 4
};              // 8

int main()
{
    struct Demo dobj;

    printf("%lu\n",sizeof(dobj));   // 4

    return 0;
}