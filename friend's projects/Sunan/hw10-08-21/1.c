// 1) In a paper, write the output of the following program. You may check your 
// answer using codeblocks or gdb online.Noticehow the continueand breakcommands are working.

#include<stdio.h>

void main() {
  int a = 6, b = 30;
  int iter = 0;
  for (; a <= 35; a += 2) {
    iter++;
    if (a % 3 == 0) {
      b -= 3;
      printf("Executing continue statement.");
      printf("iter = %d, a=%d,b=%d\n", iter, a, b);
      continue;
    }
    printf("iter= %d, a=%d,b=%d\n", iter, a, b);
    if (a > b) break;
  }
  printf("a=%d,b=%d\n", a, b);

}

// Executing continue statement.iter = 1, a=6,b=27
// iter= 2, a=8,b=27
// iter= 3, a=10,b=27
// Executing continue statement.iter = 4, a=12,b=24
// iter= 5, a=14,b=24
// iter= 6, a=16,b=24
// Executing continue statement.iter = 7, a=18,b=21
// iter= 8, a=20,b=21
// iter= 9, a=22,b=21
// a=22,b=21
