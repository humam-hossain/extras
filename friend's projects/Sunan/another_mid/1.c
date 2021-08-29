#include <stdio.h>

int main()
{
    int n,i=0,count=0;
    char string[1000];
    char result[100];

    scanf("%s", string);

    for(i=1; string[i] !='\0'; i = i+2){
        if(string[i] < 'l'){
            result[count] = string[i];
            count++;
        }
    }

    printf("[");
    for(i=0; i<count; i++){
        printf("%c", result[i]);
        if(i != count-1){
            printf(",");
        }
    }
    printf("]");

    return 0;    
}