// 4) Write a C program that takes a string input from the user and replaces all the vowels in that string with ‘#’.

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[1000];

    scanf("%[^\n]s",&str);

    for(i=0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            str[i] = '#';
        }
    }

    printf("%s", str);

    return 0;
}