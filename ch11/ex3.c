/*
	Determining the size of int 
*/

#include "stdio.h"

// void int_size (void)
// {
// 	unsigned int i = 0;
// 	i = ~0; 
// 	printf("%x\n", i);
// 	printf("%lu\n", sizeof(i));
// }

// int main(int argc, char const *argv[])
// {
// 	int_size();
// 	return 0;
// }


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


int main(int argc, char const *argv[])
{
	printf("%i\n", int_size());
	return 0;
}