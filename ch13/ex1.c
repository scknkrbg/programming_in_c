/*
	Defining a new type of function pointer that returns int.
*/

#include "stdio.h"

int func(int i)
{
	return i * 2;
}


int main(int argc, char const *argv[])
{
	typedef int (*g)(int i);
	g multiplyBy2 = &func;

	printf("%i\n", multiplyBy2(2));
	return 0;
}