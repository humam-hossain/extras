// returns sum of 1/1+1/2+1/3+.....+1/n
#include <stdio.h>

double harmonicSum(int n)
{
    int i;
    double sum=0;

    for(i=1; i<=n; i++){
        sum = sum + 1.0/i;
    }

    return sum;
}

int main()
{
    // integer n
    int n;

    // double result for storing harmonicSum() return value
    double result;

    // read n
    printf("1/1+1/2+1/3+.....+1/n\nValue of n: ");
    scanf("%d", &n);

    // call harmonicSum()
    result = harmonicSum(n);

    // print result
    printf("sum = %lf", result);

    return 0;
}