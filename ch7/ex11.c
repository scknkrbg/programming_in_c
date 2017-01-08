/*
  Sum of elements in an array
*/

#include "stdio.h"

int sumArray(int array[], int n){
  int i, sum = 0;
  for(i = 0; i < n; ++i){
    sum += array[i];
  }
  return sum;
}

int main(int argc, char const *argv[])
{
  int num, counter, e, array[num];
  printf("Enter the number of elemens in the array : \n");
  scanf("%i", &num);
  printf("Enter the elements of array :\n");
  for(counter = 0; counter < num; ++counter){
    printf("%2i. number :", counter+1);
    scanf("%i", &e);
    array[counter] = e;
 
  }

  printf("Sum of array: %i\n", sumArray(array, num));

  return 0;
}