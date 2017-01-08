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


unsigned int bitpat_search(unsigned int num, unsigned int search, int n)
{
	unsigned int bit_size_num = bit_size(num);
	unsigned int bit_size_search = bit_size(search);
	unsigned int count = 0;
	if(n > bit_size_search)
		n = bit_size_search;
	else
		bit_size_search = n;


	search <<= (bit_size_num - bit_size_search);

	printf("%u\n", bit_size_search);
	printf("%u\n", bit_size_num);

	unsigned int tmp = 0;
	while(tmp != search)
	{
		printf("%i : ", count);
		printf("%x ", search);
		tmp = num << (int_size() - bit_size_num + count);
		printf("%x ", tmp);
		tmp = tmp >> (int_size() - bit_size_search);
		printf("%x ", tmp);
		tmp = tmp << (bit_size_num - bit_size_search);
		printf("%x\n", tmp);
		++count; 
	}
	return count -1 ;
}


int main(int argc, char const *argv[])
{
	printf("%u\n", bitpat_search(0xe1f4, 0x4, 3));
	return 0;
}