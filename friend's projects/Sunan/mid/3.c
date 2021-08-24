// 3) Write a C functionthat takes as input 3 integers from the user and then returnsthe minimum number. 
// For example: If the input is 7, 2, 5, then the output is 2.[10points]
#include <stdio.h>

int min(int a, int b, int c)
{
    int min = a;

    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }

    return min;
}

int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    printf("min: %d", min(a,b,c));

    return 0;
}