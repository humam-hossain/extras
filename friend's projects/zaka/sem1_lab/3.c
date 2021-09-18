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

    int position[2];
    int y_position, x_position;

    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            printf("%d ", maze[i][j]);
        }
        
        printf("\n");
    }

    printf("Enter your postion: ");
    scanf("%d %d", &position[0], &position[1]);

    while(position[0] >=0 && position[0] <5 && position[1] >=0 && position[1] <6){
        if(maze[position[0]][position[1]] == 1){
            y_position = position[1];
            position[1]++;
        }else if(maze[position[0]][position[1]] == 2){
            y_position = position[1];
            position[1]--;
        }else if(maze[position[0]][position[1]] == 3){
            x_position = position[0];
            position[0]--;
        }else if(maze[position[0]][position[1]] == 4){
            x_position = position[0];
            position[0]++;
        }
    }

    printf("%d %d", x_position, y_position);
}