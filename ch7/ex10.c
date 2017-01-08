/*
  A Prime function that returns 1 or 0
*/

#include "stdio.h"


_Bool prime(int num){
  int i;
  _Bool result = 1;

  if(num>2 && num % 2 == 0){
    result = 0;
  } else {

    for (i = 3; i <= num/2; ++i){
      if(num % i == 0){
        result = 0;
        break;
      } else {
        result = 1;
      }
    }  
  return result;
  
  }
}


int main(int argc, char const *argv[])
{
  int i;
  printf("Enter the number for prime test : \n");
  scanf("%i", &i);

  printf("%i is prime? %i\n", i, prime(i));
  return 0;
}