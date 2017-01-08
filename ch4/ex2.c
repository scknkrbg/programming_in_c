#include "stdio.h"

int main(int argc, char const *argv[])
{
  printf(" n       n2\n");
  printf("------------\n");
  int a; 
  for (a = 1; a<=10; ++a)
  {
    printf("%2i       %i\n", a, a*a);
  }
  return 0;
}