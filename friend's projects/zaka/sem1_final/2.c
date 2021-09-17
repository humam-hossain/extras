#include <stdio.h>

int main()
{
    int Z[7][10];
    int move;

    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            if(i==0 || i==6){
                Z[i][j] = 100;
            }else if(j==0 || j==9){
                Z[i][j] = 100;
            }else if(i==1 || i==5){
                if(j>0 && j<9){
                    Z[i][j] = 200;
                }
            }else if(j==1 || j==8){
                Z[i][j] = 200;
            }else if(i==2 || i==4){
                if(j>1 && j<8){
                    Z[i][j] = 300;
                }
            }else if(j==2 || j==7){
                Z[i][j] = 300;
            }else if(i==3){
                if(j>2 && j<7){
                    Z[i][j] = 400;
                }
            }
        }
    }

    printf("enter number for move up(1), down(2), left(3), right(4): ");
    scanf("%d", &move);

    if(move == 1){
        Z[0][1] = -1;
    }else if(move == 2){
        Z[2][1] = -1;
    }else if(move == 3){
        Z[1][0] = -1;
    }else if(move == 4){
        Z[1][2] = -1;
    }

    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            printf("%d ", Z[i][j]);
        }
        printf("\n");
    }
    return 0;
}