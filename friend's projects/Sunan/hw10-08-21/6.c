// 6) Write a C program that calculates a^x, 
// where a and x are provided as inputs.

#include <stdio.h>

int main()
{
    int i, a, x, power=1;

    scanf("%d %d", &a, &x);

    for(i=0; i<x; i++){
        power *= a;
    }

    printf("%d^%d = %d", a, x, power);

    return 0;
}