// 6) Write the output of the following program. Provide a table that describeseach iterationline by line.[10 points]

#include<stdio.h>

void main() {
    int a = 3, b = 16;
    for (; a <= 17; a += 2) {
        if (a % 3 == 2) {
            b -= 3;
            continue;
        }
        printf("a=%d,b=%d\n", a, b);
        if (a > b) {
            printf("Hit break condition\n");
            break;
        }
    }
    printf("a=%d,b=%d\n", a, b);
}

/**
 * Output:
    a=3,b=16
    a=7,b=13
    a=9,b=13
    a=13,b=10
    Hit break condition
    a=13,b=10

    iterations  a   b   if (a % 3 == 2)                 printf("a=%d,b=%d\n", a, b);    if (a > b) 
    1           3   16  false                           a=3,b=16                        false
    2           5   16  true b = 16-3=13 continue;      skip                            skip
    3           7   13  false                           a=7,b=13                        false
    4           9   13  false                           a=9,b=13                        false
    5           11  13  true b=13-3=10 continue;        skip                            skip
    6           13  10  false                           a=13,b=10                       true printf("Hit break condition\n"); break;

 * **/