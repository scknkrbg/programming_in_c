/*
  Program to calculate the spceifically given operation.
*/


#include <stdio.h>

int main(void)
{
  float num1, num2, result;
  char opt;
  printf("Enter the expression (i.e: 34 * 5)\n");
  scanf("%f %c %f", &num1, &opt, &num2);

  printf("%.2f %c %.2f = ", num1, opt, num2);

  
  if(opt == '+') 
    {
      printf("%.2f\n", num1 + num2);
    }
  else if (opt == '-') 
    {
      printf("%.2f\n", num1 - num2); 
    }
  else if (opt == '/') 
    {
      printf("%.2f\n", num1 / num2); 
    }
  else if (opt == '*') 
    {
      printf("%.2f\n", num1 * num2); ;
    }
  else 
    {
      printf("Unknown operator!\n");
    }
  

  return 0;
}