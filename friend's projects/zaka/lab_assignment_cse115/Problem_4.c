#include <stdio.h>

int sum =0; // sum of total candies eaten

int max(int *arr, int n)
{
    //--Enter your code here--
    int max = 0;

    for()

    //------------------------
    return max;
}
int main()
{
    // N= Number of bags | K= Minutes
    int N,K;
    printf("Enter number of bags: ");
    scanf("%d", &N);
    printf("Enter number of minutes: ");
    scanf("%d", &K);

    //CANDIES PER BAG

    int candies[N];
    for(int i=0; i<N; i++)
    {
        printf("Enter number of candies in bag %d has: ", i+1);
        scanf("%d", &candies[i]);
    }

    //--------------------------Enter Your codes here----------------------------------

    max(candies, N);







    //---------------------------------------------------------------------------------
    printf("\nMaximum number of candies that can be eaten in %d minutes is %d\n", K,sum);


    return 0;
}
