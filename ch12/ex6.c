/*
	IS_UPPER_CASE macro that returns 1 or 0
*/

#include "stdio.h"

#define IS_UPPER_CASE(c) ((c) >= 'a' && (c) <= 'z' ? 0 : ((c) >= 'A' && (c) <= 'Z') ? 1 : -1)

int main(int argc, char const *argv[])
{
	printf("%i\n", IS_UPPER_CASE('p') );
	return 0;
}	
