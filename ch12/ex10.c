/*
	printint, printx macro
*/

#include "stdio.h"
#include <ctype.h>

#define printint(var) x##var
#define printx(n) printint((x##n))


int main(int argc, char const *argv[])
{
	printf("%i\n", isdigit('9') );
	return 0;
}