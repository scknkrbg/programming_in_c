/*
	Prime number calculation with Eratosthenes algorithm
*/

#include <stdio.h>
//#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int i, j, n = 150, m;
	int array[151];
//	bool isPrime;

	for(i = 2; i <= n; ++i)
	{
		array[i] = 0;		
		//printf("%i = %i\n", i, array[i]);
	}


	i = 2;

	while(i <= n)
	{
		for(j = 2; j * i <= n; ++j)
		{
		//	m = i * j;
			array[i*j] = 1;
		}
		++i;
	}

	for(i = 2; i <= n; ++i)
	{
		if(array[i] == 0)
		{
			printf("%i\t", i);
		}
	}

	printf("\n");

	return 0;
}