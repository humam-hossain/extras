#include <stdio.h>
int N;

typedef struct info
{ //Enter your code here
    char Name[50];
    char ID[50];
    char Course[50];
    char Section[50];
}info;
info S[100];

void student_info(struct info S[], int n)
{
    for(int i=0; i<n; i++){
        printf("\n\nName: ");
        gets(S[i].Name);

        printf("ID: ");
        gets(S[i].ID);

        printf("Course: ");
        gets(S[i].Course);

        printf("Section: ");
        gets(S[i].Section);
    }
}

void printStr(char string[])
{
    printf("%s", string);
}

void read_from_file()
{
    char c;

    FILE *fp;
    fp = fopen("my_file.txt", "r");

    c = fgetc(fp);

    printf("\nReading from file -\n");

    while(c != EOF){
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);
}

void write_to_file(struct info S[], int n)
{
    char c;

    printf("\nWriting to file -\n\n");

    FILE *fp;
    fp = fopen("my_file.txt", "w");

    for(int i=0; i<n; i++){
        fputs(S[i].Name, fp);
        fputs("\n", fp);

        fputs(S[i].ID, fp);
        fputs("\n", fp);

        fputs(S[i].Course, fp);
        fputs("\n", fp);

        fputs(S[i].Section, fp);
        fputs("\n\n\n", fp);

        fflush(fp);
    }

    fclose(fp);

    printf("Writing done!\n");
}

int main()
{

    printf("Enter the number of entries : ");
    scanf("%d",&N);
    fflush(stdin);
    //Enter your code here
    student_info(S, N);
    write_to_file(S, N);
    read_from_file();

    return 0;
}

