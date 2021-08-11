// 1) Write a functionthat takes as input 3 integers and returns the maximum integer. For example: 
// If the input is 3,4,5 the output is 5.Test your function by calling from main function. 
# include <stdio.h>

// defining a function maxfunc that takes three integer parameters and returns an integer value
// so the function should be int type & have three integer parameter
int maxfunc(int num1, int num2, int num3)
{
    int max_value;      // an integer to return maximum value
    
    max_value = num1;   // initializing max_value with one of three integers.
                        // it doesn't have to be num1. the point is we want to check one integer with other two integers
    
    // check if num2 is greater than max_value
    if(num2 > max_value){
        max_value = num2;   // if num2 > max_value (max_value=num1) meaning num2>num1 then num2 should be maximum among num1 and num2
    }

    // check if num3 is greater than max_value.
    if(num3 > max_value){
        max_value = num3;   // if num3 > max_value (now max_value is the maximum value among num1 and num2) then num3 should be maximum.
    }

    return max_value;
}

/**
 * maxfunc(2,6,5) // this means num1 = 2, num2 = 6, num3 = 5
 * 
 * max_value = 2
 * 
 * if(num2 > max_value){ // 6>2 is true
 *  max_value = num2; // so this statement will execute 
 *  //after this max_value is 6 
 * }
 * 
 * if(num3 > max_value){ // 5>6 is false
 *  max_value = num3;   // so this statement will not execute
 *  // after this max_value is still 6
 * }
 *  
 * return max_value; // returns 6
 * **/

int main()
{
    // three integer variables
    int a, b, c;
    // another integer variable to store the maximum value.
    int max;    

    // read three integers
    scanf("%d %d %d", &a, &b, &c);

    // call maximum function with the three integer variables as arguments
    max = maxfunc(a, b, c);
    
    printf("max: %d", max);

    return 0;
}