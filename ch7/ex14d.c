/*
  Transpose matrix function for 5x4 multidimensional array
*/

#include "stdio.h"

int i, j;
int row, col, e;

void displayMultiArray(int row, int col, int array[row][col]){
  
  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      printf("%4i ", array[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void transpose(int row, int col, int array[row][col], int array_2[col][row]){


  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      array_2[j][i] = array[i][j];
    }
  }
  displayMultiArray(col, row, array_2); 
}


int main(int argc, char const *argv[])
{
 

  printf("Enter the initial array dimensions: \n");
  scanf("%i%i", &row, &col);
  int array[row][col];
  int array_2[col][row];

  printf("Enter the elements: \n");
  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      printf("[%i][%i]. number: ", i, j);
      scanf("%i", &e);
      array[i][j] = e;
    }
  }
    
  displayMultiArray(row, col, array);
  transpose(row, col, array, array_2);


  return 0;
}