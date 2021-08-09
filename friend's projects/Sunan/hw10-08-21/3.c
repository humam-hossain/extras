// Write a C programthat will read a number n from user and 
// then calculate and print the sum of the following series: 1/1^2 + 1/2^2 + .... + 1/n^2

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, temp;    // temp is used for type casting

    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        temp = i*i;     // i*i returns integer result. but as it is assign to a float type variable temp, the result will be stored as float. ex. 4.00000 
        sum += 1/temp;  // sum = sum + 1/temp; temp = i*i; so sum = sum + 1/i*i
    }

    printf("Result: %f", sum);

    return 0;
}
