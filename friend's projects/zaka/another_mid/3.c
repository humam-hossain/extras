#include <stdio.h>

int main()
{
    int rows, columns;
    int A[100][100], B[100][100];
    int i,j;

    printf("rows=");
    scanf("%d", &rows);
    printf("columns=");
    scanf("%d", &columns);

    printf("A=\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("B=\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n2*A-B=\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d ", (2*A[i][j]) - B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}