/*
	foo.c as a part of multifile testing of external variables.
*/
#include "stdio.h"

extern int extern_variable;


void foo(void)
{
	printf("%i ", extern_variable);
	extern_variable = 100;
} 