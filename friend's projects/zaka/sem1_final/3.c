#include <stdio.h>

int main()
{
    int calender[12][31];

    for(int i=0; i<30; i++){
        calender[8][i] = i+1;
    }

    for(int i=0; i<12; i++){
        if(i == 0){
            printf("January\n");
        }else if(i == 1){
            printf("February\n");
        }else if(i == 2){
            printf("March\n");
        }else if(i == 3){
            printf("April\n");
        }else if(i == 4){
            printf("May\n");
        }else if(i == 5){
            printf("June\n");
        }else if(i == 6){
            printf("July\n");
        }else if(i == 7){
            printf("August\n");
        }else if(i == 8){
            printf("September\n");
        }else if(i == 9){
            printf("October\n");
        }else if(i == 10){
            printf("November\n");
        }else if(i == 11){
            printf("December\n");
        } 

        for(int j=0; j<31; j++){
            printf("%d ", calender[i][j]);
            if(i==1 && j==27){
                break;
            }
            if(i == 3 || i==5 || i==8 || i==9 || i==10){
                if(j==29){
                    break;
                }
            }
        }
        
        printf("\n");
    }

    return 0;
}