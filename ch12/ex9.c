/*
	ABSOLUTE_VALUE macro 
*/

#include "stdio.h"

#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : x)

int main(int argc, char const *argv[])
{
	int x = -343;
	int delta = 43;
	printf("ABSOLUTE_VALUE(%i + %i) = %i \n", x, delta, ABSOLUTE_VALUE(x + delta));
	return 0;
}