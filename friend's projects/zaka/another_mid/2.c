#include <stdio.h>

long int palindrome_func(int given_number){
    long int temp, result = given_number;

    do{
        temp = given_number % 10;
        given_number = given_number/10;
        result = result * 10 + temp;
    }while(given_number != 0);

    return result;
}

int main()
{
    int given_number;
    long int palidrome;

    scanf("%d", &given_number);

    palidrome = palindrome_func(given_number);

    printf("%ld", palidrome);

    return 0;
}