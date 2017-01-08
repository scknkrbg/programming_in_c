/*
  Transpose matrix function for 5x4 multidimensional array
*/

#include "stdio.h"

int i, j;

void displayMultiArray(int row, int col, int array[row][col]){
  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      printf("%i ", array[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void transpose(int array[5][4], int array_2[4][5]){

  for(i = 0; i < 5; ++i){
    for(j = 0; j < 4; ++j){
      array_2[j][i] = array[i][j];
    }
  }
  displayMultiArray(4,5, array_2); 
}


int main(int argc, char const *argv[])
{
  int array_2[4][5];
  int array[5][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}
  };

  displayMultiArray(5,4,array);
  transpose(array, array_2);
  // displayMultiArray(4,5, transpose(array[5][4], array_2[4][5]));

  return 0;
}