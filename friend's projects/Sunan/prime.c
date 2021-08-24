// prime number
#include <stdio.h>

int main()
{
    // take a num integer variable
    int i, num;

    // read the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 1 || num == 2){
        printf("prime number");
    }else{
        // 7/2, 7/3, 7/4 9/5 9/6 9/7 9/8
        for(i=2; i<num; i++){
            if(num%i == 0){
                printf("not prime");
                break;
            }
        }
        if(i == num){
            printf("prime");
        }
    }

    return 0;
}

/**
 * 
 * prime numbers:
 * 
 * 1. 1, 2 prime
 * 2. 1 or the number itself excluded
 * 3. 1< num/- <num
 * 
 * 
 * **/