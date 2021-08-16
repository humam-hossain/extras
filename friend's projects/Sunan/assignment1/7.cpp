// 7)Write a C program to implement a simple calculator (+,-,*,/)operations. 
// Implement this first using switch statement and then using if-else if statement.

#include <stdio.h>

int main()
{
	// three variables
	float num1, num2;
	char s;

	// read these variables
	scanf("%f %c %f", &num1, &s, &num2);
	
	// if(sign == '+'){
	// 	printf("=%f", num1+num2);
	// }else if(sign == '-'){
	// 	printf("=%f", num1-num2);
	// }else if(sign == '*'){
	// 	printf("=%f", num1*num2);
	// }else if(sign == '/'){
	// 	printf("=%f", num1/num2);
	// }else{
	// 	printf("Invalid Input");
	// }

	switch(s){
		case '+':
			printf("=%f", num1+num2);
			break;
		case '-':
			printf("=%f", num1-num2);
			break;
		case '*':
			printf("=%f", num1*num2);
			break;
		case '/':
			printf("=%f", num1/num2);
			break;
		default:
			printf("Invalid Input");
	}

	return 0;
}

/**
 * user input:
 * 
 * 4 + 3
 * 4 - 3
 * 4 * 3
 * 4 / 2
 * 
 * **/
