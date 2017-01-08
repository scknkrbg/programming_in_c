/*
	Function to copy string 
*/

#include "stdio.h"


void copyString (char *from, char *to)
{
	for( ; *from != '\0'; ++to, ++from)
		*to = *from;
	*to = '\0';
}


int main(int argc, char const *argv[])
{
	char from[10] = "seckin";
	char to[10];

	copyString(from, to);

	printf("from : %s", from);
	printf("\n");
	printf("to : %s", to);
	printf("\n");
	return 0;
}