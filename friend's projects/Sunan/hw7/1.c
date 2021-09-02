// 1) Write the output of the following program:

#include <stdio.h>
#include<string.h>

int main() {
    char s1[80] = "A Journey of a Little Guy";
    char s2[80] = "Thousand Miles";
    char s3[80] = "Must begin now!";
    char s4[80] = "with a Single Step.";
    char s5[80];
    char s6[80] = "";
    strcpy(s5, "");
    strncpy(s5, s1, 15);
    strcat(s5, s2);
    strcat(s5, " ");
    strncat(s6, s3, 11);
    strcat(s6, s4);
    strcat(s5, s6);
    printf("%s", s5);
    return 0;
}

/**
 * Output:
 * A Journey of a Thousand Miles Must begin with a Single Step.
 * **/