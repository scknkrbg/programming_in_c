/*
	Sort function with pointers.
*/

#include "stdio.h"

int lenght(int number [])
{	
	int i = 0, *pts = number;
	while(*pts)
	{
		++i;
		++pts;
		// printf("pts = %i\n", pts);
		// printf("*pts = %i\n", *pts);
	}
	return i;
}

void sort(int number[])
{
	int arrayLenght = lenght(number);
	int * const arrayEnd = number + arrayLenght - 1;
	printf("arrayEnd = %i\n", *arrayEnd); 


	int *temp, i, j;
	int *ptr = number;
	for (i = 0; ptr + i < arrayEnd; ++i)
	{
		for (j = i; ptr + j < arrayEnd + 1; ++j)
		{
			// printf("number 1 = %i, number 2 = %i \n", *ptr, *ptr2);
			if(*(ptr + i) > *(ptr + j))
			{	
				temp = *(ptr + j);
				*(ptr + j) = *(ptr + i);
				*(ptr + i) = temp;
			}
		}
	}

	i = 0;
	while (*(ptr + i))
	{
		printf("%i ", *(ptr + i));
		++i;
	}
	printf("\n");
}



int main(int argc, char const *argv[])
{
	int numbers[] = {23, 53, 234, 674, 347, 84, 34};
	char letter[] = {'b', 's', 'f', 'o', 'i'};

	printf("Lenght of numbers = %i \n", lenght(numbers));
	sort(numbers);
	// int *ptr = numbers;
	// while(*ptr)
	// {
	// 	printf("%i ", *ptr);
	// 	++ptr;
	// 	printf("\n");
	// }


	return 0;
}