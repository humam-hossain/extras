// 5) Write a C program that calculates the factorial 
// of a positive integer n provided as user input.

#include <stdio.h>

int main()
{
    int n, i, result=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        result *= i;
    }

    printf("result: %d", result);
    return 0;
}