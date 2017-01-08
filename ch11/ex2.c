/* 
	arithmetic or logical shift
*/

#include "stdio.h"
#include <stdbool.h>



int main(int argc, char const *argv[])
{
	short int i = -1;
	printf("original = %i\n", i);
	i >>= 5;
	printf("%i\n", i);
	
	if(i == -1)
		printf("arithmetic = %i\n", i);
	else
		printf("logical = %i\n", i);
		


	return 0;
}
