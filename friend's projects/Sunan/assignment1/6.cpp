// 6) Write a C program to check and output whether a char input is digit, uppercase letter or lowercase letter.
// Use the following information: 
// • Digit : 0-9 ASCII value 48-57 
// * Uppercase alphabet : A-Z ASCII code 65-90 
// • Lowercase alphabet a-z ASCII code 97-122

// ascii
// character ke number represent korar jonno ascii
// %c = ascii value
// %d = integer value

#include <stdio.h>

int main()
{
	// take a character variable
	char c;

	// character input
	printf("Enter a letter: ");
	scanf("%c", &c);
	// printf("%d\n",c);

	// check if c is digit or uppercase or lowercase and print
	if('0'<= c && c<='9'){ // '0'(48) - '9'(57) // 48 - 57 // '0' is less than or equal to c and c is less than or equal to '9'
		printf("Digit");
	}else if('A' <= c && c <= 'Z'){ // A <= c <= Z
		printf("Uppercase");
	}else if('a' <= c && c <= 'z'){
		printf("Lowercase");
	}

	
	return 0;
}
