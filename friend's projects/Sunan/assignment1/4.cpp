/**
4) Write a C program to read the number of minutes talked in phone and calculate the 
totalbill according to the given conditions:

For first 5 minutes Tk. 0.30/min,
For next 30 minutes Tk. 0.50/min,
For next 1 hour Tk. 0.75/min, 
Thereafter, Tk. 1.00/min. 
An additional VAT of 15% is added to the bill. 
  
For example, for 45 minutes talking time: 
Total bill = 1.15*(Tk. 0.3/min*5min + Tk. 0.5/min*30min + 0.75/min*10min) = Tk. 1.15*(0.3*5+0.5*30+0.75*10) =Tk. 27.6

**/

#include <stdio.h>

int main()
{
	// take variables for min & total_bill
	float min;
	float total_bill, sub_total;

	// read the number of minutes talked
	printf("Enter the number of minutes talked: ");
	scanf("%f", &min);

	// sub_total
	if(min <= 5){ // below 5 minutes
		sub_total = min * 0.30;
	}else if(min<=35){ // 5< - 35
		sub_total= 5 * 0.3 + (min-5) * 0.5;
	}else if(min<=95){ // 35< - 95
		sub_total = 5 * 0.3 + 30 * 0.5 + (min-35) * 0.75;
	}else{ // 95<
		sub_total = 5 * 0.3 + 30 * 0.5 + 60 * 0.75 + (min-95) * 1;
	}

	// total_bill
	total_bill = sub_total * 1.15;

	// print total_bill
	printf("Total Bill: %f", total_bill);
	
	return 0;
}

/**
 * 
 * Enter the number of minutes talked: 135
 * 
 * 1. 3 * 0.30/min =  0.9 tk
 * 135 - 5 = 130 min
 * 
 * 2. 30 * 0.5/min = 15 tk
 * 130 - 30 = 100 min
 * 
 * 3. 60 * 0.75/min = 45 tk
 * 100 - 60 = 40
 * 
 * 4. 40 * 1/min = 40tk
 * 
 * sub_total = 0.9 = 0.9
 * 
 * total_bill =  11.5 + 11.5 * 0.15
 * 			= 11.5(1 + 0.15)
 * 			= 11.5 * 1.15 = 13.225
 * 
 * total_bill = sub_total * 1.15 = 0.9 * 1.15 = 1.035
 * 
 * 3min = 1.035tk
 * 25min = 13.225 tk
 * 135min = 116.725 tk
 * 
 * **/