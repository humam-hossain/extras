#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    char your_name[100];
    int length;
    int space_index;
    char temp;

    printf("Noun: ");
    scanf("%s", &word);

    length = strlen(word);

    printf("Your Name: ");
    scanf("%c", &temp);
    gets(your_name);

    printf("a) Length of the noun is %d\n", length);

    for(int i=0; i < strlen(your_name); i++){
        if(your_name[i] == ' '){
            space_index = i;
        }
    }

    printf("b) Plural: %s", word);

    if(word[length-1] == 'o' || word[length-1] == 's' || (word[length-2] == 's' && word[length-1] == 'h') || (word[length-2] == 'c' && word[length-1] == 'h')){
        printf("es\n");
    }else{
        printf("s\n");
    }

    printf("c) ");
    for(int i=space_index+1; i<strlen(your_name); i++){
        printf("%c", your_name[i]);
    }
    printf(" ");
    for(int i=0; i<space_index; i++){
        printf("%c", your_name[i]);
    }

    return 0;

}