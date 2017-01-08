/*
	Editing rotatee() function so that int size is calculated by int_size.
*/

#include "stdio.h"

unsigned int int_size(void)
{
	int count = 0, tmp = ~0;
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

int main(int argc, char const *argv[])
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u; 
	printf("%u\n", int_size());
	printf("%x\n", rotate(w1, 8));
	printf("%x\n", rotate(w1, -16));
	printf("%x\n", rotate(w2, 4));
	printf("%x\n", rotate(w2, -2));
	printf("%x\n", rotate(w1, 0));
	printf("%x\n", rotate(w1, 44));
	printf("%i\n", rotate(691, 31));

	return 0;
}