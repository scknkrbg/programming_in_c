/*
	Twofold array
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int numbers[10] = {1,0,0,0,0,0,0,0,0,0};
	int i, j;

	for(j = 0; j < 10; ++j)
	{
		for(i = 0; i < j; ++i)
		{
			numbers[j] += numbers[i];
		}
	}

	for(i = 0; i < 10; ++i)
		printf("%i\n",numbers[i]);
	return 0;
}