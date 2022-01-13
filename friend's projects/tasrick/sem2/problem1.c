#include<stdio.h>
#include<string.h>

int main()
{
    int list[5] = {1,3,5,7,9};
    int p,q,r;

    p = ++list[1];
    q = list[1]++;
    r = list[p++];
    printf("%d %d %d", p,q,r);
    return 0;
}