#include <stdio.h>

struct BookInfo
{
    char name[50];
    char author[50];
    float price;
};

int main()
{
    struct BookInfo books[10];
    char temp;

    for(int i=0; i<10; i++){
        printf("\n\nBook Name: ");
        gets(books[i].name);

        printf("Author: ");
        gets(books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    for(int i=0; i<10; i++){
        printf("\n\nBook Name: %s\n", books[i].name);
        printf("Author: %s\n", books[i].author);
        printf("Price: %f", books[i].price);
    }

    return 0;
}