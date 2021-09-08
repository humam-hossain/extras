#include <stdio.h>
int N;

typedef struct info
{ //Enter your code here
    char Name[50];
    char ID[50];
    char Course[50];
    char Section[50];
}info;
info S[100];

int main()
{

    printf("Enter the number of entries : ");
    scanf("%d",&N);
    fflush(stdin);
    //Enter your code here
    while(fgets(S, sizeof(S), stdin)){

    }

    return 0;
}

