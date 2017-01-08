/*
	File operations
*/

#include <stdio.h>
// #include <stddef.h>

int main(int argc, char const *argv[])
{
	FILE *inputfile;

	if((inputfile = fopen("etc.txt", "r")) == NULL)
		printf("file could not be loaded!\n");
	else
		printf("file opened!\n");
	

	return 0;
}

