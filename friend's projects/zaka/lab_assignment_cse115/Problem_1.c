#include <stdio.h>

void bad_swap(char, char);
void good_swap(char *, char *);

int main()
{
    char a,b;
    char word[3];

    printf("Enter two characters : \n");
    scanf("%c %c", &a, &b);
    printf("\n\n");

    printf("Variable var_1 = %c has been stored in address = %p\n", a, &a);
    printf("Variable var_2 = %c has been stored in address = %p\n\n", b, &b);

    bad_swap(a, b);
    printf("After a bad swap (without pointers):\n");
    printf("var_1 = %c, Address = %p\n", a, &a);
    printf("var_2 = %c, Address = %p\n\n", b, &b);

    good_swap(&a, &b);
    printf("After a good swap (with pointers):\n");
    printf("var_1 = %c, Address = %p\n", a, &a);
    printf("var_2 = %c, Address = %p\n\n", b, &b);

    printf("Enter a 3 letter word to reverse : ");
    scanf("%s", &word);

    good_swap(&word[0], &word[2]);
    printf("\nReversed string = %s", word);

    return 0;
}

void bad_swap(char a, char b)
{
    char temp = b;
    b = a;
    a = temp;
}

void good_swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

