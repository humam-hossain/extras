#include <stdio.h>

float factorial(int n)
{
    int i;
    float fact=1;

    for(i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int i,n;
    float result=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        result = result + i/factorial(i); 
    }

    printf("result=%f", result);

    return 0;
}