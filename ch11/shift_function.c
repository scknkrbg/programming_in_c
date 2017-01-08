/*
	Shift function to shift bits.
*/

#include "stdio.h"

unsigned int shift(unsigned int value, int n)
{
	if(n > 0)
		value <<= n; //left shift
	else
		value >>= -n; //right shift
	return value;
}


int main(int argc, char const *argv[])
{
	unsigned int w1 = 0177777u, w2 = 0444u;
	unsigned int shift (unsigned int v, int n);

	printf("shift(w1, -5) = %o, w1 >> %i = %o \n", shift(w1, -5), -5, w1 >> 5);
	printf("shift(w1, 5) = %o, w1 << %i = %o \n", shift(w1, 5), 5, w1 << 5);
	printf("shift(w1, 0) = %o, w1 << %i = %o \n", shift(w1, 0), -5, w1 >> 0);
	return 0;
}