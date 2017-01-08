/*
	Array initialization.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[10];
	int i;

	for(i = 0; i < 10; ++i)
	{
		array[i] = 0;
		printf("%i = %i\n", i, array[i]);
	}


	return 0;
}
