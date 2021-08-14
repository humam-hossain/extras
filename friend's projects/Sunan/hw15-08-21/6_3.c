// Outputs the numbers from start to end in descending order

#include <stdio.h>
void listNumbersDesc(int start, int end)
{
    int i;

    for(i=start; i>=end; i--){
        printf("%d\n", i);
    }
}

int main()
{
    // start and end integer variables
    int start, end;

    // read start and end
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    if(start>end){
        listNumbersDesc(start, end);
    }else{
        printf("Invalid: start value must be greater than end value.");
    }

    return 0;
}