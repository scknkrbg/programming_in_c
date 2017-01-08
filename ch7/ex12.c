/*
  Transposing matrix
*/

#include "stdio.h"

void transpose(int nRow, int nCol, int array[nRow][nCol]) {
  int array_2[nCol][nRow];
  int i, j;
  for(i = 0; i < nRow; ++i){
    for(j = 0; j < nCol; ++j){
      printf("%i ", array[i][j]);
    }
    printf("\n");
  }


  for(i = 0; i < nRow; ++i){
    for(j = 0; j < nCol; ++j){
      array[i][j] = array_2[j][i];
      printf("%i ", array_2[j][i]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[])
{
  int i, j;
  int n1, n2;
  int e, array[n1][n2];
  printf("Enter the numbers (x y): ");
  scanf("%i%i", &n1, &n2);

  printf("Enter the array elements:\n");
  for(i = 0; i < n1; ++i){
    for(j = 0; j < n2; ++j){
      printf("%i. row, %i. column : \n", i, j);
      scanf("%i", &e);
      array[i][j] = e;
    }
  }

  transpose(array, n1, n2);

  return 0;
}