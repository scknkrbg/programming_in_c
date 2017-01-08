/*
	bitpat_search functions that looks for a specified pattern in a given number.
*/

#include "stdio.h"

unsigned int int_size(void)
{
	unsigned int tmp = ~0, count = 0;
	while(tmp != 0)
	{
		tmp <<= 1;
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


unsigned int bit_size(int bit)
{
	unsigned int count = 0;
	if(bit < 0)
		return int_size();
	else
	{
		while(bit != 0)
		{
			bit >>= 1;
			++count; 
		}
		return count;
	}
	return -1;
}


unsigned int bitpat_search(unsigned int num, int search)
{
	unsigned int count = 0, bit_size_search = bit_size(search);
	unsigned int result, bit_size_num = bit_size(num);
	search <<= bit_size(num) - bit_size_search;
	printf("%x\n", search);
	result = num & search;
	printf("%x\n", result);

	while(result != search)
	{
		search = rotate(search, -1);
		result = num & search;
		++count;
	}
	return count;
}


int main(int argc, char const *argv[])
{
	printf("%u\n", bitpat_search(0xe1f4, 0x5));
	return 0;
}