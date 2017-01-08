/*
	Structure containing pointers.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	struct intPointers
	{
		int *p1;
		int *p2;
	};


	struct intPointers pointers;

	int i1 = 100, i2;

	pointers.p1 = &i1;
	pointers.p2 = &i2;
	*pointers.p2 = -97;

	printf("*p1 = %i, *p2 = %i, i1 = %i, i2 = %i\n", *pointers.p1, 
		*pointers.p2, i1, i2);
	return 0;
}