#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    char id[50];
    char cgpa[50];
}student;

student S[100];

int main()
{
    int n, j;
    char temp;
    char edit_name[50];

    printf("n=");
    scanf("%d", &n);
    scanf("%c", &temp);

    for(int i=0; i<n; i++){
        printf("\n\nName: ");
        gets(S[i].name);

        printf("ID: ");
        gets(S[i].id);

        printf("cgpa: ");
        gets(S[i].cgpa);
        // scanf("%c", &temp);
        
    }

    for(int i=0; i<n; i++){
        printf("\n%s", &S[i].name);
    }

    printf("\nenter name of the record you want to edit: ");
    scanf("%s", &edit_name);
    scanf("%c", &temp);

    for(j=0; j<n; j++){
        if(!strcmp(edit_name,S[j].name)){
            printf("\n\nName: ");
            gets(S[j].name);

            printf("ID: ");
            gets(S[j].id);

            printf("cgpa: ");
            gets(S[j].cgpa);

            break;
        }
    }

    if(j==n){
        printf("No such student found");
    }

    printf("\n\nAdd a new student\n");
    printf("Name: ");
    gets(S[n].name);

    printf("ID: ");
    gets(S[n].id);

    printf("cgpa: ");
    gets(S[n].cgpa);

    for(int i=0; i<n+1; i++){
        printf("\n%s", &S[i].name);
        printf("\n%s", &S[i].id);
        printf("\n%s", &S[i].cgpa);
    }

    return 0;

}