/*
	Insert a string into another string
*/

#include "stdio.h"

int lengthOfString(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
		++i;
	return i;
}



void insertString(const char source[], const char ins[], int start)
{
	int count = lengthOfString(ins);
	int count_original = lengthOfString(source);
	int i = 0;
	char new_string[81];
	



	// printf("%i \n", count);
	while(i < count_original + count)
	{
		if(i < start)
			new_string[i] = source[i];
		else if(i > start + count - 1)
			new_string[i] = source[i - count];
		else
			new_string[i] = ins[i - start];
		// printf("i = %i, %c\n", i, new_string[i]);
		++i;
	}

	new_string[i] = '\0';

	i = 0;
	while (new_string[i] != '\0')
	{
		printf("%c", new_string[i]);
		++i;
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	const char source[] = "the wrong son";
	insertString(source, "pre-", 4);
	return 0;
}