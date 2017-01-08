/*
  Negative number reversing.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  long int num ;
  int res;
  printf("Enter a negative number to be reversed!\n");
  
  scanf("%li", &num);
  
  while(num < 0)
  {
    while(num < 0)
    {
      printf("%li", -(num % 10));
      num = num / 10;

    }
   
    printf("-\n");
    scanf("%li", &num);
  } 
  printf("You did not enter a negative number!\n");

  return 0;
}