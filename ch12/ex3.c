/*
	Defining a macro MIN that gives the minimum of two values.
*/

#include <stdio.h>

#define MIN(x,y) ((x) > (y) ? (y) : (x))

int main(int argc, char const *argv[])
{
	int s = MIN(453, 432);
	printf("%i\n", s);
	return 0;
}