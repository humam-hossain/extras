#include<stdio.h>

int main()
{
    int maze[5][6] = {
        {1,4,1,1,3,2},
        {4,2,3,2,1,3},
        {1,1,1,3,3,2},
        {1,1,1,1,4,3},
        {3,4,3,2,2,3},
    };

    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            printf("%d ", maze[i][j]);
        }
        
        printf("\n");
    }
}