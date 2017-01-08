/*
	IS_ALPHABETIC macro that returns nonzero IS_LOWER_CASE, IS_UPPER_CASE
*/

#include "stdio.h"

#define IS_ALPHABETIC(c) ((IS_LOWER_CASE(c) || IS_UPPER_CASE(c)) ? 1 : 0)
#define IS_LOWER_CASE(c) ((c) >= 'a' && (c) <= 'z' ? 1 : 0)
#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z' ? 1 : 0)


int main(int argc, char const *argv[])
{
	printf("%i\n", IS_ALPHABETIC('a'));	
	return 0;
}