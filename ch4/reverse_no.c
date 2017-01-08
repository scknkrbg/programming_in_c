#include "stdio.h"

int main(int argc, char const *argv[])
{
  int a, b;
  printf("Enter the numbers to reverse:");
  scanf("%i", &a);
  int a2 = a;

  printf("The reverse of %i is ", a2);

  while(a != 0)
  {
    b = a % 10;
    printf("%i", b);
    a /= 10; 
  }
  printf("\n");
  return 0;
}