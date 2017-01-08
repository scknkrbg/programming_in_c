/*
  Multidimensional Arrays.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, y;
  int array [3][4] = {[0][0] = 1, [1][1] = 2, [2][2] = 3};


  for (i = 0 ; i <= 2; ++i)
  {
    for(y = 0; y <= 3; ++y)
    {
      printf("%i\t", array[i][y]);
    }
    printf("\n");
  }



  return 0;
}