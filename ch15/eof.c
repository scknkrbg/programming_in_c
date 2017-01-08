/*
	copying std input to std output
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;

	while((c = getchar()) != EOF)
		putchar(c);
	printf("\n");
	return 0;
}