// 1) Write  a  C  program  that  finds  the  largest  number  in  an  array  of  integers.  
// The  number  of elements in the array is 10. 
// The program then swaps the largest element of the array with the third element of the array.

#include <stdio.h>

int main()
{
    int num[10];
    int max;
    int max_i = 0;
    int temp;

    scanf("%d", &num[0]);

    for(int i=1; i<10; i++){
        scanf("%d", num[i]);
        if(num[i] > max){
            max = num[i];
            max_i = i;
        }
    }

    temp = num[max_i];
    num[max_i] = num[2];
    num[2] = temp;

    return 0;

}