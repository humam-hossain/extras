// int sum(int n); returns the sum 1+2+3+....+n

#include <stdio.h>
int sum(int n){
    // formula for 1+2+3+....+n
    return n*(n+1)*0.5;
}

int main()
{
    // take an integer variable for n
    int n, result;

    // read n
    printf("1+2+3+....+n\nEnter value of n: ");
    scanf("%d", &n);

    // call sum()
    result = sum(n);
    // print the result
    printf("result = %d", result);

    return 0;
}