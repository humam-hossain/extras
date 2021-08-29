#include <stdio.h>

int main()
{
    int tarr[1000];
    int n,i;

    scanf("%d", &n);

    tarr[0] = 3;
    tarr[1] = 1;
    tarr[2] = 3;

    for(i=0; i<n; i++){
        if(i > 2){
            tarr[i] = tarr[i-3] + tarr[i-2] + tarr[i-1];
        }
        printf("%d ", tarr[i]);
    }

    return 0;
}