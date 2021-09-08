#include <stdio.h>

void display(int a[], int b[]);
int main()
{
   int arr_1[10], arr_2[10]={0};
   printf("Enter 10 numbers for the array : \n");
   //Enter your code here

   //
   display(arr_1,arr_2);
    return 0;
}

void display(int a[], int b[])
{
    printf("\n\n\n\n  arr_1  |  arr_2\n");
   for(int i = 0;i<10;i++)
   {
       if(b[i]==0)
       {

            printf("   %d    |     -\n",a[i]);
       }else
       {
           printf("   %d    |     %d\n",a[i],b[i]);
       }

   }
}

