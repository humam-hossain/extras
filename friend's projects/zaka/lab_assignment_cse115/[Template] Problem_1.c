#include <stdio.h>

void bad_swap(char, char);

int main()
{
    char a,b;

    printf("Enter two characters : \n");
    scanf("%c %c", &a, &b);
    printf("\n\n");

    bad_swap(a, b);

    return 0;
}

void bad_swap(char a, char b)
{
    char temp = b;
    b = a;
    a = temp;
}


