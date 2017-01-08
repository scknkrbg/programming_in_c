#include "stdio.h"

int main(int argc, char const *argv[])
{
  int number, num = 1, original_number, sum = 0;

  printf("Enter the number whose integers to bu summed: ");
  scanf("%i", &number);
  original_number = number;

  while(num != 0)
  {
    num = number % 10;
    sum += num;
    number /= 10;
  }
  printf("Integers of %i sums up = %i\n", original_number, sum);
  return 0;
}