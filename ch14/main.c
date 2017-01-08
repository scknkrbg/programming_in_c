/* 
	main.c as a part of multifile testing of external variables.
*/

#include "stdio.h"

int extern_variable;
void foo(void);

int main(int argc, char const *argv[])
{
	printf("%i ", extern_variable);
	extern_variable = 6;
	foo();
	printf("%i \n", extern_variable);
	return 0;
}


