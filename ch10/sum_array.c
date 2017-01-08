/*
	Function to sum the elements of an integer array.
*/

#include "stdio.h"

int arraySum(int array[], int n)
{
	int *ptr, sum = 0;

	int * const arrayEnd = array + n;

	for(ptr = array; ptr < arrayEnd; ++ptr)
		sum += *ptr;

	return sum;

}


int main(int argc, char const *argv[])
{
	int values[] = {3, 7, -43, 53, 1, 63, 9};

	printf("Sum of values = %i\n", arraySum(values, 7));
	return 0;
}