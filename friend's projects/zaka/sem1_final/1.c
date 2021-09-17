#include <stdio.h>

int main()
{
    int A[10];
    int sum = 0;

    A[0] = -1;
    A[9] = 100;

    for(int i=0; i<10; i++){
        if(i>0 && i <9){
            A[i] = i;
        }

        sum = sum + A[i];
    }

    printf("sum = %d", sum);

    return 0;    
}