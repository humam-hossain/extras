// int sumOfDigits(int x) returns the sum of digits of the positive integer x.
// For example, when called with the parameter 12345, this function returns 15

#include <stdio.h>

int sumOfDigits(int x)
{
    // a sum integer variable
    int sum=0;
    // take digits one by one and add them
    do{
        sum = sum + (x%10);     // last digit   // 12345%10 = 5
        x = x/10;       // removing last digit // 12345/10 = 1234
    }while(x != 0);

    return sum;
}

int main()
{
    // integer number
    int num;
    // sum of digits should be integer
    int sum;

    // read num
    printf("Enter a number: ");
    scanf("%d", &num);

    // call sumOfDigits() and store return value to the sum vairable
    sum = sumOfDigits(num);

    // print sum
    printf("sum of digits of %d is %d", num, sum);

    return 0; 
}