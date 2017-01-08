/*
	Using multi dimensional arrays with functions
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	void displayMatrix(int nRows, int nCols, int array[nRows][nCols]);
	void scalarMultiply(int nRows, int nCols, int array[nRows][nCols], int n);

	int matrix[3][5] = 	{
							{3, 4, 6, 3, 9},
							{1, 34, 332, 3, 1},
							{5, 2, 6, 8, 2}
					 	};

	printf("Display original matrix :\n");
	displayMatrix(3, 5, matrix);
	printf("Multiplied by 4 :\n");
	scalarMultiply(3, 5, matrix, 4);

	return 0;
}


void displayMatrix(int nRows, int nCols, int array[nRows][nCols])
{

	int i, j;

	for(i = 0; i < nRows; ++i)
	{
		for(j = 0; j < nCols; ++j)
		{
			printf("%6i", array[i][j]);
		}
		printf("\n");
	}		
}

void scalarMultiply(int nRows, int nCols, int array[nRows][nCols], int n)
{
	int i, j;

	for(i = 0; i < nRows; ++i)
	{
		for(j = 0; j < nCols; ++j)
		{
			array[i][j] *= n; 
		}
	}

	displayMatrix(nRows, nCols, array);
}