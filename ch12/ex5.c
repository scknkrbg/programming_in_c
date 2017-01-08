/*
	Define a macro SHIFT that shifts bits.
*/

#include "stdio.h"

#define SHIFT(value, n) ((n) > 0 ? (value) << (n) : (value) >> (-n))

int	 main(int argc, char const *argv[])
{
	unsigned int  w1 = 0177777u, w2 = 0444u;
    
    printf ("%o\t%o\n", SHIFT(w1, 5), w1 << 5);
    printf ("%o\t%o\n", SHIFT(w1, -6), w1 >> 6);
    printf ("%o\t%o\n", SHIFT(w2, 0), w2 >> 0);
    printf ("%o\n", SHIFT(SHIFT(w1, -3), 3));
	return 0;
}