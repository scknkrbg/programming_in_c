#include "stdio.h"

int main(int argc, char const *argv[])
{
  int n;

  printf("Enter the number for factorials :");
  scanf("%i", &n);
  printf("\n");

  for (int i = 1; i <= n; ++i)
  {
    int factorial = 1;
    for (int t = 1; t <= i; ++t)
    {
      factorial *= t;
    } 
    printf("%-2i!  =  %i\n", i, factorial);
  }
 
  
  return 0;
}