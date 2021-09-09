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
    input1 = random();
    input2 = random();

    result = GCD(input1, input2);

    //---------------------
    printf("The GCD of %d and %d is %d", input1,input2,result);

    //DecToBin
    //Enter Code here

    input1 = random();

    result = DecToBin(input1);
    printf("\n");
    //---------------------
    printf("The Binary of %d is %d", input1, result);

    //SeriesSum
    //Enter Code here

    input1 = random();

    result = SeriesSum(input1);
    printf("\n");

    //---------------------
    printf("The Sum of series upto %d is %d", input1, result);


    //SequencePrint
    //Enter Code here

    input1 = random();
    printf("\n");

    SequencePrint(input1);

    //---------------------


    return 0;
}

//#####Enter your codes here#####

int GCD(int a, int b) {
    if (b != 0)
        return GCD(b, a % b);
    else
        return a;
}

int DecToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 * DecToBin(dec / 2));
}

int SeriesSum (int n){
    static int sum = 1;

    if(n == 0){
        return sum;
    }

    sum = 1 + 0.5 * sum;

    SeriesSum(n-1);
}

int SequencePrint (int n){
    int tarr[1000];

    tarr[0] = 0;
    tarr[1] = 1;
    tarr[2] = 0;

    for(int i=0; i<n; i++){
        if(i > 2){
            tarr[i] = tarr[i-3] + tarr[i-2] + tarr[i-1];
        }
        printf("%d ", tarr[i]);
    }

    return 0;
}