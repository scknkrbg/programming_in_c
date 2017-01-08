/*
	Defining a MAX3 macro the maximum of the given three values.
*/

#include <stdio.h>

#define MAX3(x, y, z) ((x) > (y) && (x) > (z) ? (x) : (y) > (x) && (y) > (z) ? (y) : (z))

int main(int argc, char const *argv[])
{
	printf("%i\n", MAX3(23,24,54));
	return 0;
}	