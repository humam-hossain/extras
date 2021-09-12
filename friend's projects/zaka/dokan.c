#include <stdio.h>

struct Shop
{
    char name[20];
    char address[20];
};

struct ItemType
{
    char type[20];
    char price[20];
};

int main(void)
{
    int n;
    char temp;
    struct Shop S;

    printf("Shop Name: ");
    scanf("%[^\n]s", &S.name);

    printf("Address: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &S.address);

    printf("Number of item types: ");
    scanf("%d", &n);

    struct ItemType IT[n];

    for(int i=0; i<n; i++){
        printf("Item Type: ");
        scanf("%c", &temp);
        scanf("%[^\n]s", &IT[i].type);
        
        printf("Item Price: ");
        scanf("%c", &temp);
        scanf("%[^\n]s", &IT[i].price);
    }

    FILE *fp;
    fp = fopen("shop.txt", "w");

    fputs(S.name, fp);
    fputs("\n", fp);

    fputs(S.address, fp);
    fputs("\n", fp);

    for(int i=0; i<n; i++){
        fputs(IT[i].type, fp);
        fputs("\n", fp);

        fputs(IT[i].price, fp);
        fputs("\n", fp);
    }

    fclose(fp);

    return 0;
}