/*
  Prgoram to calculate the 200th triangular number Introduction of the for statement.  
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, triangularNumber;

  triangularNumber = 0;

  for (n = 1; n <=200; n += 1) triangularNumber = triangularNumber + n;

    printf("The 200th triangular number is %i\n", triangularNumber
     );

  return 0;
}