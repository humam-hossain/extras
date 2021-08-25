// 1) Write a C program that calculates the sum of the following series where x and n is provided as user input:
// 1 + x/1! + x^2/2! + ..... + x^n/n!

#include <stdio.h>

double factorial(int n){
    int i;
    double fact=1;

    for(i=1; i<=n; i++){
        fact = fact * i;
    }

    // printf("factorial(%d)=%lf\n",n,fact);

    return fact;
}

double xpower(int x, int n){
    int i;
    double multi=1;

    for(i=0; i<n; i++){
        multi = multi * x; 
    }

    // printf("xpower(%d, %d)= %lf, ",x,n,multi);
    
    return multi;
}

double resultfunc(int x, int n)
{
    int i;
    double sum=0;

    for(i=0; i<=n; i++){
        sum = sum + xpower(x, i)/factorial(i);
    }

    return sum;
}

int main()
{
    // x, n variables
    int x, n;
    double result;

    printf("x=");
    scanf("%d", &x);
    printf("n=");
    scanf("%d", &n);

    // call resultfunc()
    result = resultfunc(x,n);

    // print result
    printf("result= %lf", result);

    return 0;
}