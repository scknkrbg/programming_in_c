/*
  Tests the divisiveness of first number to a second number.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
  {
    int num1, num2;
    printf("Enter the numbers to be divided : \n");
    scanf("%i %i", &num1, &num2);
    int mod = num1 % num2;

    mod == 0 ? printf("%i can evenly be divided by %i, remainder is %i\n", num1, num2, mod) : printf("Cannot be divided, remainder is %i\n", mod);

    return 0;
  }