// Write a C programthat will read a number n from user and 
// then calculate and print the sum of the following series: 1/1^2 + 1/2^2 + .... + 1/n^2

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, temp;

    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        temp = i*i;
        sum += 1/temp;
    }

    printf("Result: %f", sum);

    return 0;
}