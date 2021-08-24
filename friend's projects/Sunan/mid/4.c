// 4) CGPA (Cumulative Grade Point Average) is a measure of how well students are doing. 
// Write a C program that asks user for a CGPA value and then prints out 
// the following messages based on the inputted value. [10 points]

#include <stdio.h>

int main()
{
    float cgpa;

    printf("CGPA: ");
    scanf("%f", &cgpa);

    if(cgpa < 2){
        printf("Failing CGPA");
    }else if(cgpa <= 2.69){
        printf("C range CPGA");
    }else if(cgpa <= 3.69){
        printf("B range CGPA");
    }else if(cgpa <= 3.99){
        printf("A-range CPGA");
    }else if(cgpa == 4){
        printf("Perfect A CGPA");
    }else{
        printf("Invalid CGPA entered");
    }

    return 0;
}