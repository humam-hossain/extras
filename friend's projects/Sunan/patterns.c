// patterns
#include <stdio.h>

int main()
{
    // number of lines
    int i, j, n;
    float f;

    printf("Number of lines: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=n-i; j>0; j--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        for(j=i-1; j>0; j--){
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}

/**
 * 
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 *     
 *     *
 *    **
 *   ***
 *  ****
 * *****
 *  ****
 *   ***
 *    **
 *     *
 * 
 * 
 * 
 * **/
