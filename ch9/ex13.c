/*
	uppercase() function that produce uppercase counter parts for a given lowecase string.
*/

#include "stdio.h"
#include <stdbool.h>

const char lowercase [50] = "mahmut";
char new_source[50];

void convertToArray (const char string[])
{
	int i = 0;
	while(string[i] != '\0')
	{
		new_source[i] = string[i];
		++i;
	}
	new_source[i] = '\0';
}

void uppercase(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		str[i] += 'A' - 'a'; 
		++i;
	}
	str[i] = '\0';
}

int main(int argc, char const *argv[])
{
	convertToArray(lowercase);
	uppercase(new_source);

	int i = 0;
	while(new_source[i] != '\0')
	{
		printf("%c", new_source[i]);
		++i;
	}
	printf("\n");
	return 0;
}