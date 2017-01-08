/*
	bitpat_get function to partially get bits.
*/

#include "stdio.h"

unsigned int int_size(void)
{
	unsigned int tmp = ~0;
	unsigned int count = 0;
	while (tmp != 0)
	{
		tmp <<= 1;
		++count;
	}
	return count;
}

unsigned int bit_size(unsigned int num)
{
	unsigned int count = 0;
	while(num != 0)
	{
		num >>= 1;
		++count;
	}
	return count;
}

unsigned int bitpat_get(unsigned int num, int start, int count)
{
	unsigned int bit_size_num = bit_size(num);
	if(bit_size_num < count)
		count = bit_size_num;

	num <<= int_size() - bit_size_num + start;
	num >>= int_size() - count;
	return num;
}

int main(int argc, char const *argv[])
{
	unsigned int num = 0xe1f4;

	printf("%x = %x\n", num, bitpat_get(num, 2, 5));
	return 0;
}