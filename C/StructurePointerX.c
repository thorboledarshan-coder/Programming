#include<stdio.h>

struct Demo
{
    int i;      // 4
    int *ptr;   // 8
};              // 12

int main()
{
    struct Demo dobj;
    int no = 21;

    dobj.i = 11;
    dobj.ptr = &no;
    
    printf("%d\n",dobj.i);      // 11
    printf("%d\n",*(dobj.ptr)); // 21

    return 0;
}