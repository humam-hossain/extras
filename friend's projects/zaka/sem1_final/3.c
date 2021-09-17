#include <stdio.h>

int main()
{
    int calender[12][31] = {
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30},
        {},
        {},
        {}
    };

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
            // calender[i][j] = j+1;
            printf("%d ", calender[i][j]);
            if(i==1 && j==27){
                break;
            }
            if(i == 3 || i==5 || i==8 || i==10){
                if(j==29){
                    break;
                }
            }
        }
        
        printf("\n");
    }

    return 0;
}