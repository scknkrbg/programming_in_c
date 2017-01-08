/*
	Rotate function that rotates bits.
*/

#include "stdio.h"

unsigned int rotate (unsigned int number, int bit)
{
	unsigned int tmp_number;

	if(bit > 0)
	{
		bit %= 32;

		tmp_number = number >> (32 - bit);
		number = tmp_number | (number << bit);
	}
	else if(bit < 0)
	{
		bit *= -1;
		bit %= 32;

		tmp_number = number << (32 - bit);
		number = tmp_number | (number >> bit);  
	}

	return number;
}



int main(int argc, char const *argv[])
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

	printf ("%x\n", rotate (w1, 8));
	printf ("%x\n", rotate (w1, -16));
    printf ("%x\n", rotate (w2, 4));
    printf ("%x\n", rotate (w2, -2));
    printf ("%x\n", rotate (w1, 0));
    printf ("%x\n", rotate (w1, 44));

	return 0;
}