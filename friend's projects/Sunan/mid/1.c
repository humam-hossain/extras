#include <stdio.h>

int main()
{
    int i, j, n;
    float temp, sum=0;

    printf("n:");
    scanf("%d",&n);
        
    for(i=1; i<=n; i++){
        temp = 0;
        for(j=1;j<=i;j++){
            temp = temp + j;
        }
        // printf("%d:%f\n",i,temp);
        sum = sum + 1.0/temp;
    }

    printf("Sum:%f",sum);

    return 0;
}