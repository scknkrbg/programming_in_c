/*
	Counting the character numbers of a string
*/

#include "stdio.h"


int stringLenght(char str[])
{
	int count = 0;

	while(str[count] != '\0')
		++count;
	return count;
}

int main(int argc, char const *argv[])
{
	char str[] = "gulcano";

	printf("Number of chars in %s = %i\n", str, stringLenght(str));

	return 0;
}