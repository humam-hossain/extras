#include<stdio.h>

int main()
{
    int bulb, round, count=0;

    printf("#of bulb= ");
    scanf("%d", &bulb);

    printf("#of rounds= ");
    scanf("%d", &round);

    int array[bulb];

    for(int i=0; i<bulb; i++){
        array[i] = 0;
    }

    for(int i=0; i<round; i++){
        if(i==0){
            for(int j=0; j<bulb; j++){
                array[j] = 1;
            }
        }
        else if(i==1){
            for(int j=1; j<bulb; j=j+1){
                array[j] = 0;
            }
        }else if(i==2){
            for(int j=2; j<bulb; j=j+2){
                if(array[j] == 0){
                    array[j] = 1;
                }else{
                    array[j] = 0;
                }
            }
        }else{
            if(array[i] == 0){
                array[i] = 1;
            }else{
                array[i] = 0;
            }
        }
    }

    for(int i=0; i<bulb; i++){
        if(array[i] == 1){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}