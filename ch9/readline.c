/*
	Reading a line from terminal input.
*/

#include "stdio.h"


void readLine(void)
{
	int i = 0, j;
	char buffer[81];
	char character;
	printf("Enter the line : ");

	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
		printf("while %i\n", i);
	}
	while(character != '\n');

	buffer[i-1] = '\0';


	printf("%s\n", buffer);

	for(j = 0; j < i; ++j)
	{
		printf("%i : %c\n", j, buffer[j] );
	}

	printf("\n");
}


int main(int argc, char const *argv[])
{
	readLine();
	return 0;
}