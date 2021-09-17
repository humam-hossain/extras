#include <stdio.h>
int main()
{
   float f = 1000;
   char c[50]; //size of the number
    sprintf(c, "%g", f);
    printf(c);
    printf("\n");
}