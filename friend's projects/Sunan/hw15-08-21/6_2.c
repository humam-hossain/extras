// void listNumbersAsc(int start, int end);
// Description: Outpits the numbers from start to end in ascending order.
#include <stdio.h>

void listNumbersAsc(int start, int end){
    int i;

    for(i=start; i<=end; i++){
        printf("%d\n",i);
    }
}

int main()
{
    // integer start and end variable
    int start, end;

    // read start & end
    printf("start: ");
    scanf("%d", &start);
    printf("end: ");
    scanf("%d", &end);

    // call listNumbersAsc to print
    if(end>start){
        listNumbersAsc(start, end);
    }else{
        printf("end value must be greater than start value.");
    }
    

    return 0;
}