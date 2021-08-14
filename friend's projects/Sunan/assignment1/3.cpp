// 3)Write a C program that 
// takes as input 3 integers from the user and then computes the maximum number.

#include <stdio.h>

int main()
{
	int max, a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	
	max = a;
	
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	
	printf("%d", max);
	return 0;
}
