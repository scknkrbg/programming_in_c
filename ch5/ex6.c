/*
  Number to text conversion.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int num, mod, counter = -1;
  printf("Enter the number to be converted :\n");
  scanf("%i", &num);
  

  while(num > 0)
  {
    int num_alt = num;

    while(num > 0)
    {
      mod = num % 10; 
      num /= 10;
      ++counter;
    }

    //printf("%i %i %i\n", counter, num, num_alt);

    num = num_alt;

    for (counter; counter >= 0; --counter)
    {
      double divider = pow(10.0,(double)counter);
      mod = num / (int) divider;
      num = num % (int) divider;
     // printf("%i %i %i\n",mod, num, (int) divider);

      switch (mod)
      {
        case 0:
        printf("zero\t");
        break;

        case 1: 
        printf("one\t");
        break;

        case 2: 
        printf("two\t");
        break;

        case 3: 
        printf("three\t");
        break;

        case 4: 
        printf("four\t");
        break;

        case 5: 
        printf("five\t");
        break;

        case 6: 
        printf("six\t");
        break;

        case 7: 
        printf("seven\t");
        break;

        case 8: 
        printf("eight\t");
        break;

        case 9: 
        printf("nine\t");
        break;
      }      
    }
    printf("\n");
    scanf("%i", &num);
  }

  return 0;
}