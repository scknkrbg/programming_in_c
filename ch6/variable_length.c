/*
  Variable length arrays.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int num, index;
  

  printf("Enter a number btw 1-75 :");
  scanf("%i", &num);

  long long int array[num];

  if(num < 1 || num > 75)
  {
     printf("Bad number!\n");
     return 1;
  }

  for(index = 2; index < num; ++index)
  {
    

    array[0] = 0;
    array[1] = 1;

    array[index] = array[index-1] + array[index-2];

  }

  for(index = 0; index < num; ++index)
    printf("%lli\t", array[index] );

  printf("\n");
  return 0;
}