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
    char str_price[50];

    for(int i=0; i<10; i++){
        printf("\n\nBook Name: ");
        gets(books[i].name);

        printf("Author: ");
        gets(books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);

        scanf("%c", &temp);
    }

    for(int i=0; i<10; i++){
        printf("\n\nBook Name: %s\n", books[i].name);
        printf("Author: %s\n", books[i].author);
        printf("Price: %f", books[i].price);
    }

    FILE *fp;
    fp = fopen("book_shop.txt", "w");

    for(int i=0; i<10; i++){
        fputs("Book Name: ", fp);
        fputs(books[i].name, fp);
        fputs("\n", fp);

        fputs("Author: ", fp);
        fputs(books[i].author, fp);
        fputs("\n", fp);

        fputs("Price: ", fp);
        sprintf(str_price, "%g", books[i].price);
        fputs(str_price, fp);
        fputs("\n\n", fp);
    }

    return 0;
}