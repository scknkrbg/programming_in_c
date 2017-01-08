/*
	Debugging C programs.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int data[5] = {1,2,3,4,5};
	int i, sum;

	for(i = 0; i < 5; ++i)
		sum += data[i];

	printf("sum = %i\n", sum);
	return 0;
}