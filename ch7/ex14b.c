/*
  Sum of elements in an array
*/

#include "stdio.h"

int num;
int counter;
int e;


int sumArray(int array[], int n){
  int sum = 0;
  for(counter = 0; counter < n; ++counter){
    sum += array[counter];
  }
  return sum;
}

int main(int argc, char const *argv[])
{
    
  printf("Enter the number of elemens in the array : \n");
  scanf("%i", &num);
  int array[num];
  
  printf("Enter the elements of array :\n");
  for(counter = 0; counter < num; ++counter){
    printf("%2i. number :", counter+1);
    scanf("%i", &e);
    array[counter] = e;
 
  }

  printf("Sum of array: %i\n", sumArray(array, num));

  return 0;
}