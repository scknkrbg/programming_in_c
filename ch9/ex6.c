/*
	Remove string from another string
*/

#include "stdio.h"

void removeString(const char source[], int start, int count)
{
	int i = 0, j = 0;
	char new_string[81];
	while(source[i] != '\0')
	{
		if(i < start || i > start + count - 1)
		{
			new_string[j] = source[i];
			++j;
		}
		++i;
	}
	new_string[j] = '\0';

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
	removeString(source, 10, 6);
	return 0;
}