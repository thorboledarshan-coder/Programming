#include<stdio.h>

int main()
{
    char cArr[4] = {'a','b','c','d'};
    int iArr[4] = {10,20,30,40};
    float fArr[4] = {10.0f,20.0f,30.0f,40.0f};
    double dArr[4] = {10.0,20.0,30.0,40.0};\

    printf("Size of character array : %lu\n",sizeof(cArr)); // 4
    printf("Size of integer array : %lu\n",sizeof(iArr));   // 16
    printf("Size of float array : %lu\n",sizeof(fArr));     // 16
    printf("Size of double array : %lu\n",sizeof(dArr));    // 32

    return 0;
}