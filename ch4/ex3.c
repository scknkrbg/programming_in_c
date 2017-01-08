#include "stdio.h"

int main(int argc, char const *argv[])
{
  for (int i = 5; i <= 50; i += 5)
  {
    printf("%2i    %i\n", i, i*(i+1)/2);

  }
  return 0;
}