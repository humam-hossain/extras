// 2) In a paper, write the output of 
// the following program for user input: 3729485. You may check your answer using codeblocks or gdb online. 

#include <stdio.h>

int main() {
  int number, digit;
  int iter;
  printf("Enter a number: ");
  scanf("%d", & number);
  iter = 0;
  while (number > 0) {
    iter++;
    printf("Iteration number %d, ", iter);
    digit = number % 10;
    printf("digit = %d\n", digit);
    number = number / 10;
  }
  return 0;
}

// Enter a number: 3729485
// Iteration number 1, digit = 5
// Iteration number 2, digit = 8
// Iteration number 3, digit = 4
// Iteration number 4, digit = 9
// Iteration number 5, digit = 2
// Iteration number 6, digit = 7
// Iteration number 7, digit = 3