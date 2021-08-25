// 4) Write a C program to read elements of a matrix in a 2D array and 
// then swap the elements of the diagonal with the last row. 
// The dimension of the matrix is 5 x 5.

#include <stdio.h>

int main()
{
    // 5x5 matrix
    int i, j, matrix[5][5], temp;

    // read
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // swap
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                temp = matrix[4][j];
                matrix[4][j] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }

    //print
    printf("\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}