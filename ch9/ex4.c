/*
	Substring function
*/

#include "stdio.h"
#include "stdbool.h"

void substring(const char str[], int start, int count, char result[])
{
	int i = start;
	while(str[i] != '\0' && i < start + count)
	{
		result[i - start] = str[i]; 
		++i;
	}
	result[i - start] = '\0';

	for(i = 0; result[i] != '\0'; ++i)
	{
		printf("%c", result[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	const char str[] = "suicide is not gonna save you!";
	char result[81];
	int start = 20;
	int count = 30;

	substring(str, start, count, result);

	return 0;
}