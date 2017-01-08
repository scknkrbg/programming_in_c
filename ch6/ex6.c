/*
	Generating Fibonacci numbers without arrays.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0, bir = 0, iki = 1, son, num;
	
	printf("Enter the number of Fibonacci numbers :\n");
	scanf("%i", &num);

	printf("%i\t%i\t", bir, iki);

	do {
		son = bir + iki;
		bir = iki;
		iki = son;
		printf("%i\t", son);
		++i;
	} while (i < num);

	printf("\n");
	return 0;
}