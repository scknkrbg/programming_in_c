/*
  Array counter
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num = 1;
  int surveyCount[21];
  printf("Enter the numbers between 1-20 :\n");
  
  for (int i = 1; i <= 20; ++i)
  {
    surveyCount[i] = 0;
  }

  while(num > 0 && num < 21)
  {
    scanf("%i", &num);
    for(int counter = 1; counter <= 20; ++counter)
    {
      if(counter == num) ++surveyCount[counter];
    }
  }
  for (int i = 1; i <= 20; ++i)
  {
    printf("%i = %i\n", i, surveyCount[i]);
  }
  return 0;
}