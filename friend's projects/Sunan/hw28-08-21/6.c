// 6) Write a C program to read elements of a matrix in a 2D array and thenprint outthesum of the diagonal. 
// The dimension of the matrix is 5 x 5.

#include <stdio.h>

int main()
{
    int i, j, matrix[5][5];
    int sum=0;

    // user input
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
            if(i==j){
                sum = sum + matrix[i][j];
            }
        }
    }

    // print sum of diagonal
    printf("%d", sum);
    
    return 0;
}