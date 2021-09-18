#include<stdio.h>
int main()
{
    int n, t1 = 1, t2 = 3, nextTerm = 0, i;
    printf("n=");
    scanf("%d", &n);
    if(n == 0 || n == 1) 
    printf("%d", n); 
    else
    nextTerm = t1 + t2;
    for (i = 3; i <= n; ++i)
    {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    }
    printf("%d", t2);
}