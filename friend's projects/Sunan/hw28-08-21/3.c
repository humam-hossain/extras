// 3) Write a C program that computes the average of an array of floats. 
// Then the program prints out the numbers in the array that are smaller thanthe average.

#include <stdio.h>

int main()
{
    int i, n;
    float arr[1000], average, sum=0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum/n;

    for(i=0; i<n; i++){
        if(arr[i] < average){
            printf("%f ", arr[i]);
        }
    }

    return 0;
}