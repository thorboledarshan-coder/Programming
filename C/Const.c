#include<stdio.h>

int main()
{
    int i = 10;
    const int j = 10;

    i++;    // Allowed
    j++;    // Not allowed

    // j = j + 1
    
    return 0;
}