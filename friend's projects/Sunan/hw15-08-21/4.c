// 4) Write a function that calculates a^x, where a and x are provided as inputs. 
// Test your function by calling from main function.

#include <stdio.h>

int xpower(int a, int x){
    int i;
    int result=1;

    for(i=1; i<=x; i++){
        result = result * a;
    }

    return result;
}

int main()
{
    int a, x;

    scanf("%d %d", &a, &x);
    printf("%d^%d = %d",a,x, xpower(a,x));

    return 0;
}