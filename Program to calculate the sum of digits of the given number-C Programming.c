#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{

  int n, digits;
  //This program helps us to calculate the sum of digits of the given number.
  printf ("Enter a Number\n");
  scanf ("%d", &n);
  int digit, num, sum = 0;
  num = n;

  while (num > 0)
    {
      digit = num % 10;
      sum = sum + digit;
      num = num / 10;
    }

  printf ("%d ", sum);
  return 0;
}
