// 1) Write a function that takes as input 3 integers and returns the maximum integer. For example: 
// If the input is 3,4,5 the output is 5.Test your function by calling from main function. 
#include <stdio.h>

// function
int max(int num1, int num2,int num3)
{
    int max = num1;

    if(num2 > max){
        max = num2;
    }
    if(num3 > max){
        max = num3;
    }

    return max;
}

int main()
{
    // take 3 integer variables
    int a,b,c;

    // read 3 integers
    scanf("%d %d %d", &a,&b,&c);

    // call the function to return the maximum integer
    printf("max=%d", max(a,b,c));
}