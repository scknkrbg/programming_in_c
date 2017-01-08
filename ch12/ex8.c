/*
	IS_DIGIT and IS_SPECIAL macros that returns nonzero, 
	if it is a digit and neither digit nor alphabetic.
*/

#include "stdio.h"

#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9' ? 1 : 0)
#define IS_SPECIAL(c) (((!IS_ALPHABETIC(c)) && (!IS_DIGIT(c))) ? 1 : 0)
#define IS_ALPHABETIC(c) ((IS_LOWER_CASE(c) || IS_UPPER_CASE(c)) ? 1 : 0)
#define IS_LOWER_CASE(c) ((c) >= 'a' && (c) <= 'z' ? 1 : 0)
#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z' ? 1 : 0)


int main(int argc, char const *argv[])
{
	char c = '?';
	printf("%c IS_DIGIT = %i\n", c, IS_DIGIT(c));
	printf("%c IS_SPECIAL = %i\n", c, IS_SPECIAL(c));
	return 0;
}