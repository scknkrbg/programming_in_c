/*
	bitpat_set function to set specified bits into another int right adjusted. 
*/

#include "stdio.h"

unsigned int int_size(void)
{
	unsigned int tmp = ~0;
	unsigned int count = 0;
	while(tmp != 0)
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

unsigned int pointer_bit(unsigned int *pointer)
{
	printf("%x\n", *pointer);
	return *pointer;
}


unsigned int bitpat_set(unsigned int *bullet, unsigned int target, unsigned int start, unsigned int count)
{
	unsigned int tmp = *bullet;
	printf("%i\n", int_size());
	printf("%u\n", bit_size(tmp));
	printf("%x\n", *bullet);
	tmp <<= (int_size() - bit_size(tmp) + start);
	printf("%x\n", tmp);
	tmp >>= (int_size() - count);
	printf("%x\n", tmp);

	target <<= count;
	target = target | tmp; 
	return target;
}

int main(int argc, char const *argv[])
{
	unsigned int bullet = 0x5u, target = 0xe1f4u;
	unsigned int *pointer = &bullet;
	
	// printf ("%x \n", pointer_bit(pointer));


	printf("%x -> %x = %x\n", *pointer, target, bitpat_set(pointer, target, 1, 2));
	return 0;
















}