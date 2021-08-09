// 4) Write a C programthat will read a number n from user and then 
// calculate and print the sum of the following series up to n-th term: 1+2+3+4+5+ .... +n

#include <stdio.h>

int main()
{
    int n, sum=0;

    scanf("%d", &n);
    sum = n*(n+1)*.5;

    printf("Result: %d", sum);

    return 0;
}