#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lower 7
#define upper 23
int random()
{   srand(time(0));
    return ((rand() % (upper - lower + 1)) + lower);
}

int GCD (int a, int b);
int DecToBin(int dec);
int SeriesSum (int n);
int SequencePrint (int n);

int main()
{
    int input1, input2, result;
    //GCD
    //Enter Code here


    //---------------------
    printf("The GCD of %d and %d is %d", input1,input2,result);

    //DecToBin
    //Enter Code here


    //---------------------
    printf("The Binary of %d is %d", input1, result);

    //SeriesSum
    //Enter Code here


    //---------------------
    printf("The Sum of series upto %d is %d", input1, result);


    //SequencePrint
    //Enter Code here





    //---------------------


    return 0;
}

//#####Enter your codes here#####

