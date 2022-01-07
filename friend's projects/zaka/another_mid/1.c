#include <stdio.h>


int sum_digits(int num)
{
    int sum=0;

    while(num != 0){
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int num;

    printf("Enter a positive (or) to terminate):");
    scanf("%d", &num);

    if(num < 0){
        printf("Error: %d is a negative number\n\n");
    }else if(num == 0){
        printf("Program Terminated");
        return 0;
    }else{
        printf("The sum of the digits for %d is %d", num, sum_digits(num));
    }

    return main;
}