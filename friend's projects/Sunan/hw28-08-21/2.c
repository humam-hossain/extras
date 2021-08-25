// Write a C program that finds the smallest number in an array of integers.
// The number of elements in the array is 10. 
// The program then swaps the smallest element of the array with the first element of the array. 
// [Hint: Use a for loop to find the smallest number]

#include <stdio.h>

int main()
{
    // an integer array of size 10
    int arr[10];
    // smallest number variable
    int i, smallest, smallest_position, temp;

    // take all elements of arr
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    smallest_position = 0;

    for(i=1; i<10; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallest_position = i;
        }
    }

    temp = arr[0];
    arr[0] = smallest;
    arr[smallest_position] = temp;

    // print
    printf("smallest element: %d\n", smallest);

    printf("\narr[]=[");
    for(i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    printf("]");

    return 0;
}