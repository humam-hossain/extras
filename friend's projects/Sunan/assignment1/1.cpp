// 1) BMI(Body Mass Index) is a measure of health based on height and weight. Write a C program that 
// asks user for a BMI value and then prints out the following messages based on the inputted value.
// Below 16 Dangerously underweight
// 16 -19 Underweight
// 19 -24 Normal weight
// 24 -29 Overweight
// Above 29 Seriously overweight

// <--0---------16=============-19------->
// 16 <= bmi < 19
// 16 <= bmi and bmi <19


#include <stdio.h>

int main()
{
	// take a variable for bmi. // 7.9 18.3
	float bmi;
	// read the variable bmi
	printf("Enter a value of bmi: ");
	scanf("%f", &bmi); // bmi = 15.5 0 10 16 17 100
	
	// condition wise output
	if(bmi < 16){ // below 16 // bmi < 16 = false
		printf("Dangerously underweight");
	}else if(bmi<19){// 16-19; bmi greater than 16 or equal to 16 and/but bmi is less than 19 
		printf("Underweight");
	}else if(bmi < 24){ // 19 - 24; bmi is greater than or equal to 19 and bmi is less than 24
		printf("Normal weight");
	}else if(bmi <29){ // 24 - 29
		printf("Overweight");
	}
	else{ // bmi > 29
		printf("Seriously overweight");
	}

	return 0;
}