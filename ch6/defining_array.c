/*
  Defining an array.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int a[10];
  for (int i = 1; i <= 10; ++i)
  {
    printf("%i\n", a[i]);  
  }

  return 0;
}