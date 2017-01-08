/*
	Bitwise ops and, or, xor and 1's complement
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;


	printf("w1 & w2 = %o,  w1 | w2 = %o, w1 ^ w2 = %o \n", w1 & w2, w1 | w2, w1 ^ w2);
	printf("~w1 = %o, ~w2 = %o, ~w3 = %o \n", ~w1, ~w2, ~w3);
	printf("w1 ^ w1 = %o, w1 & ~w2 = %o, w1 | w2 | w3 = %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
	printf("w1 | w2 & w3 = %o, w1 | w2 & ~w3 = %o\n", w1 | w2 & w3, w1 | w2 & ~w3);
	printf("~(~w1 & ~w2) = %o, ~(~w1 | ~w2) = %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));

	w1 ^= w2;
	w2 ^= w1;
	w1 ^= w2;

	printf("w1 = %o, w2 = %o\n", w1, w2);

	return 0;
}