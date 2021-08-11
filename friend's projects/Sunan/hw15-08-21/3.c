// 3) Write a function that takes as input an integer. 
// If the integer is negative, print out an appropriate message. 
// If the integer is positive the function tests whether the integer is a prime number or
//  not and prints out an appropriate message.

# include <stdio.h>

// prime check function
int prime(int num){
    int i;

    // num is postive number. 1 and 2 are primes. checking if the num is 1 or 2.
    if(num <= 2){
        // printf("1 or 2 \n");
        return 1;
    }
    if(num%2 == 0){
        // printf("can be divided by 2\n");
        return 0;
    }
    
    for(i=3; i<num; i=i+2){
        if(num % i == 0){
            // printf("can be divided by %d\n", i);
            return 0;
        }
    }

    // printf("cannot be divided by any number\n");
    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    // check if the number is negative or positive
    if(n < 0){
        printf("%d is a negative number\n", n);
    }else if(n > 0){
        // check if the number is prime or not
        if(prime(n) == 1){
            printf("%d is a prime number\n", n);
        }else{
            printf("%d is not a prime number\n", n);
        }
    }

    return 0;
}