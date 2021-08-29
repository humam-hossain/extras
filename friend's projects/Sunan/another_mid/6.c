#include <stdio.h>

int main()
{
    int arr[1000];
    int result[1000];
    int i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(i+3 < n){
            result[i+3] = arr[i];
        }else{
            result[i+3-n] = arr[i];
        }   
    }

    printf("[");
    for(i=0; i<n; i++){
        printf("%d", result[i]);
        if(i != n-1){
            printf(",");
        }
    }
    printf("]");

    return 0;
}