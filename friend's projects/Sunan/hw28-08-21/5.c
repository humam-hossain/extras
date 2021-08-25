// 5) Write a C program to read elements of a matrix in a 2D array and 
// thenprint outthe number of zeros in the matrix. 
// The dimension of the matrix is 5 x 5.

#include <stdio.h>

int main()
{
    int i, j, count=0;
    int matrix[5][5];

    //user input & count
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0){
                count ++;
            }
        }
    }

    //print
    printf("zeros count: %d", count);

    return 0;
}