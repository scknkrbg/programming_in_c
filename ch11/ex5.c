/*
	Bit detection and setting through bit_set and bit_get functions
*/

#include "stdio.h"
#include <stdbool.h>

unsigned int int_size(void)
{
	unsigned int num = ~0;
	int count = 0;
	while(num != 0)
	{
		num <<= 1;
		++count;
	}
	return count;
}



unsigned int rotate(unsigned int num, int counter)
{
	unsigned int int_s = int_size();
	int tmp, result, final;

	if(counter < 0)
		tmp = -counter % int_s;	
	else
		tmp = counter % int_s;
	

	if(counter < 0)
	{
		result = num << (int_s - tmp);
		final = result | (num >> tmp);
	}
	else
	{
		result = num >> (int_s - tmp);
		final = result | (num << tmp);
	}
	return final;
}



unsigned int bit_test(unsigned int num, int i)
{
	unsigned int max_bit = int_size() - 1;
	if(i > max_bit || i < 0)
		return 0;
	else
	{	
		num >>= max_bit - i;
		num &= 1;
		if(num == 0)
			return 0;
		else
			return 1;
	}
}


unsigned int bit_set(unsigned int num, int i)
{

	if(bit_test(num, i) == 1)
		return num;
	else
	{
		unsigned int to_be_rotated, int_s, result;
		int_s = int_size();
		to_be_rotated = int_s - 1 - i;
		result = rotate(num, -to_be_rotated); 	
		result |= 1;
		printf("%i\n", result);
		result = rotate(result, to_be_rotated);
		return result;
	}
}



int main(int argc, char const *argv[])
{
	int num, bit;

	printf("Enter a number: ");
	scanf("%i", &num);
	
	printf("\n");

	printf("Enter the bit number: ");
	scanf("%i", &bit);

	printf("%i's %ith bit = %u\n", num, bit, bit_test(num, bit));
	printf("%i's %ith bit set is %u\n", num, bit, bit_set(num, bit));

	return 0;
}




