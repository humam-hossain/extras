// Write a C programthat will read a number n from user and 
// then calculate and print the sum of the following series: 1/1^2 + 1/2^2 + .... + 1/n^2

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, temp;    // temp is used for type casting 
    // float sum=0;
    // float sum;
    // sum = 0;
    // both are same

    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        temp = i*i;     // i*i returns integer result. but as it is assign to a float type variable temp, the result will be stored as float. ex. 4.00000 
        sum += 1/temp;  // sum = sum + 1/temp; temp = i*i; so sum = sum + 1/i*i
        
        // sum = sum + 1/i*i // try this instead but this doesn't work. why?
        // let's break down the whole operation
        //
        // remember: sum is a float type variable
        // remember: i is an integer type variable
        //
        // i*i is a integer operation thus returns an integer
        // 1/i*i here 1 is an integer and i*i is also an integer value so the operation will be in integer operation thus generate an integer value.
        // but 1/i*i can have fraction value such as 1/4 = 0.25 but as this operation is integer operation so it will neglect fraction part and returns only whole number.
        // so 0 will be the result in the case of 1/4 rather than 0.25.
        //
        // now sum is a floating point variable and 1/i*i returns an integer value. so the addition operation will be in floating point.
        // so the result will be in floating point and it will assign the result to the floating variable, sum.
        //
        // for example: 
        // sum = sum + 1/2*2
        // first operation: 2*2 = 4
        // second operation: 1/4 = 0 (see it is integer)
        // third operation: (0) = 0.000000 [sum + (0); different types so it will change to 0.000000]                 
        // fourth operation: sum + 0.000000
        // last operation: sum = (sum + 0.000000) [assigning the operation result to sum]
        //
        // we could use sum = sum + 1.0/i*i;
        // cz 1.0 is a floating point value but i*i is an integer so the division operation will be in floating point which results in a floatin type value.
        // thus 1.0/4 = 0.25 will be evaluated.

    }

    printf("Result: %f", sum);

    return 0;
}
