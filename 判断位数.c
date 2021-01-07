/* Calculates the number of digits in an integer */
#include <stdio.h>
int main(void)
{
  int digits = 0, n;
  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);
  while (n > 0) {
    n /= 10;
    digits++;
  } 
  printf("The number has %d digit(s).\n", digits);
  return 0;
}

