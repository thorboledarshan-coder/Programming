#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("Size of of all variables\n");
    
    printf("%lu\n",sizeof(ch));  // 1    
    printf("%lu\n",sizeof(i));   // 4
    printf("%lu\n",sizeof(f));   // 4
    printf("%lu\n",sizeof(d));   // 8

    return 0;
}