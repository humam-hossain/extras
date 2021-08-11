// three integers are given. find the maximum number.
#include <stdio.h>

void main()
{
    // take three integer variables
    int a, b, c;

    // read those integers
    scanf("%d %d %d", &a, &b, &c); // a=5, b=6, c=7

    // find the maximum integers through if else statements
    // a>b true
    // b>a

    if(a > b){ // 1 > 100
        // a > b
        if(a > c){
            // (a > b) > c
            printf("max: %a", a);
        }else{
            // a > b kintu a < c // c > (a > b)
            printf("max: %a", c);
        }
    }else{
        // b > a
        if(b > c){ // 100 >= 100
            // b > c > a
            printf("max: %d", b); // 100
        }else{
            // c > b > a
            printf("max: %d", c); // 100
        }
    }
}