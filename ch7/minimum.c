/*
	Finds the minumum value of an array.
*/

#include "stdio.h"

int minumum (int array[], int numOfArray)
	{
		int i, temp;

		int minValue = array[0];

		for(i = 0; i < numOfArray; ++i)
		{
			if(minValue > array[i])
			{
				minValue = array[i];
			}
		}
		return minValue;
	}


int main(int argc, char const *argv[])
{
	int i, num, minValue, numOfArray;

	printf("Enter the array size : \n");
	scanf("%i", &numOfArray);
	int array[numOfArray];

	for(i = 0; i < numOfArray; ++i)
	{
		scanf("%i", &num);
		array[i] = num;
	}

	//int minumum(int array[10]);	

	minValue = minumum(array, numOfArray);
	printf("Min value is :%i\n", minValue);	

	return 0;
}