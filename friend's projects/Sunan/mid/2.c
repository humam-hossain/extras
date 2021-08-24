#include <stdio.h>

void main() {
  int i = 16 >> 2, j = 5 << 3;
  printf("i=16>>2=%d, j=5<<2=%d\n",i,j);
  int k;
  printf("i=%d, j=%d\n", i, j);
  i = i | 16;
  printf("i=%d, j=%d\n", i, j);
  k = j | 16;
  printf("i=%d, k=%d\n", i, k);
  if (j % 2 == 0) {
    j = j & 16;
    printf("i=%d, j=%d\n", i, j);
  }
  if (i < j) 
    printf("i=%d, j=%d\n", ++i, j++);
  else
    printf("i=%d, j=%d\n", i++, ++j);
  printf("Done");
}