#include "stdio.h"

int main(int argc, char const *argv[])
{
  int a, b, temp;
  printf("Enter the numbers to find GCD :");
  scanf("%i %i", &a, &b);
  int a2 = a, b2 = b;

  while(b != 0)
  {
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("GDD of %i and %i is %i. \n", a2, b2, a);
  return 0;
}