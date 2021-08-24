// 5) Write a C program to calculate the sum of the following series where n is a user input. [5 points]
// 1/1-1/2+1/3-1/4+.....1/n
// ((-1)^n)*1/n

#include <stdio.h>

float xpower(int num, int power){
    int i;
    float result=1;
    
    for(i=1; i<=power; i++){
        result = result * num;
    }

    return result;
}

int main()
{
    int i,n;
    float temp, sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        temp = 1.0/i;
        sum = sum + xpower(-1, i-1) * temp;
    }

    printf("sum = %f", sum);

    return 0;
}