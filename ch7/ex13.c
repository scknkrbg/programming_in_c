/*
  sort function taking asc or desc parameter
*/

#include "stdio.h"

void displayArray(int n, int array[n]){
  int i;
  for(i = 0; i < n; ++i){
    printf("%i ", array[i]);
  }
  printf("\n");
}

void sort(int n, int array[n], char order){
  int i, j, temp;

  if(order == 'a'){
    for(i = 0; i < n-1; ++i){
      for(j = i+1; j < n; ++j){
        if(array[i] > array[j]){
        temp = array[j]; 
        array[j] = array[i];
        array[i] = temp;
        }  
      }
    }
  } else {
    for(i = 0; i < n-1; ++i){
      for(j = i+1; j < n; ++j){
        if(array[i] < array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }  
      } 
    }
  }
  displayArray(n, array);
}


int main(int argc, char const *argv[])
{
  int n, i, element;
  int array[n];
  printf("Enter the number of elements: \n");
  scanf("%i", &n);

  printf("Enter the elements: \n");
  for(i = 0; i < n; ++i){
    printf("%i. element: ", i+1);
    scanf("%i", &element);
    array[i] = element;
  }

  displayArray(n, array);
  sort(n, array, 'd');

  return 0;
}