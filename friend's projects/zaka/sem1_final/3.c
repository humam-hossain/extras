#include <stdio.h>

int main()
{
    int calender[12][5][7] = {
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        },
        {
            {},{},{},{},{}
        }
    };

    for(int i=0; i<12; i++){
        switch(i){
            case 0:
                printf("January\n");
                break;
            case 1:
                printf("February\n");
                break;
            case 2:
                printf("March\n");
                break;
            case 3:
                printf("April\n");
                break;
            case 4:
                printf("May\n");
                break;
            case 5:
                printf("June\n");
                break;
            case 6:
                printf("July\n");
                break;
            case 7:
                printf("August\n");
                break;
            case 8:
                printf("September\n");
                break;
            case 9:
                printf("October\n");
                break;
            case 10:
                printf("November\n");
                break;
            case 11:
                printf("December\n");
                break;
            default:
                break;
        }

        for(int j=0; j<6; j++){
            switch (j){
                case 0:
                    printf("Sun ");
                    break;
                
                default:
                    break;
            }
        }
        
        printf("\n");
    }

    return 0;
}