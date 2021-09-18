#include<stdio.h>

void arrayDiv(int arr[] , int size)
{
    int i,j;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(arr[i] % arr[j] != 0){
                break;
            }
        }
        if(j == size){
            printf("%d", arr[i]);
            break;
        }
    }
}

int main()
{
    int arr[5];

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    arrayDiv(arr, 5);

    return 0;
}