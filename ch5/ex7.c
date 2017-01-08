/*
  Calculating the prime numbers in a efficient way,
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int num = 2, counter, i;
  bool isPrime;

  
  while(num > 0)
  {
    printf("Enter the number : \n");
    scanf("%i", &num);
    printf("%i\t", 2);

    for(counter = 3; counter <= num; counter += 2)
    {
      isPrime = true;
    
      for(i = 3; i < counter; i += 2)
      {
        isPrime = (counter % i == 0) ? false : true; 
        if(isPrime == false) break;           
      }  
      if (isPrime == true )
        printf("%i\t", counter);
    }
    printf("\n");
    
  }

  
  return 0;
}