/*
  Least common multiplier
*/

#include "stdio.h"

int lcd (int n1, int n2){
  //ast common divisor
  int temp;

  while(n2 > 0){
    temp = n1 % n2;
    n1 = n2;
    n2 = temp;
  }
  return n1;
}



int gcd (int n1, int n2){
  int gcd;

  gcd = (n1 * n2) / lcd(n1, n2);
  return gcd;
}

int main(int argc, char const *argv[])
{
  int n1, n2;
  printf("Enter the numbers (num1 num2): ");
  scanf("%i%i", &n1, &n2);
  printf("\n");
  printf("EBOB of %i & %i = %i\n", n1, n2, lcd(n1, n2));
  printf("OKEK of %i & %i = %i\n", n1, n2, gcd(n1, n2));

  return 0;
}

