/*
	Substring function
*/

#include "stdio.h"
#include "stdbool.h"

const char substring(const char str[], int start, int count, const char result[])
{
	int i = start;
	while(str[i] != '\0' || i < start + count)
	{
		result[i - start] = str[i]; 
		++i;
	}
	result[i - start] = '\0';
	return result;
}

int main(int argc, char const *argv[])
{
	const char str[81] = "suicide is not gonna save you!";
	const char result[81];
	int start = 4;
	int count = 10;


	printf("%s = from %i.th %i string is = %s\n", str, start, count, result);
 	return 0;
}