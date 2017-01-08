/*
	readLine function with pointers
*/

#include "stdio.h"

void readLine(char str[])
{
	char *start = str;
	char *ptr = str;
	char character;
	int i = 0;

	do
	{
		character = getchar();
		*ptr = character;
		str[i] = *ptr;
		++ptr;
		++i;
		
	}
	while(character != '\n');

}


int main(int argc, char const *argv[])
{
	char string[50] ;
	readLine(string);
	printf("%s", string);
	
	return 0;
}