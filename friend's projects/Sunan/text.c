// three integers are given. find the maximum number.
#include <stdio.h>

void main()
{
    // take three integer variables
    int a, b, c;

    // read those integers
    scanf("%d %d %d", &a, &b, &c); // a=5, b=8, c=1

    // find the maximum number

    // a > b && a > c, max =a
    // && = and operation condition1 && condition2
    // || = or operation    condition1 || condition2
    // ! = not  !condition 

    /**
     * boolean algebra
     * a && b =
     * a || b =
     * 
     * **/

    if(a>b && a>c){ // 5 > 8 && 5 > 1
        printf("max: %d", a);
    }else if(b>a && b>c){ // 8>5 && 8 > 1
        printf("max: %d", b);
    }else if(c>a && c>b){
        printf("max: %d", c);
    } 

}