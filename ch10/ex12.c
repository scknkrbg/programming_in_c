/*
	printf exercise to combine functions and function arguments including pointers
*/


#include "stdio.h"

int main(int argc, char const *argv[])
{
	char *message = "Programming in C is fun\n";
	char message2[] = "You said it\n";
	char *format = "x = %i\n";
	int x = 100;

	// set 1
	printf("Programming in C is fun\n"); //true
	printf("%s", "Programming in C is fun\n"); //true
	printf("%s", message); //true
	printf(message); //false - gave a warning of insecurity but worked!

	// set 2
	printf("You said it\n"); //true
	printf("%s", message2); //true
	printf(message2); //true
	printf("%s", &message2[0]); //false - it starts from the index to print the string

	// set 3
	printf("said it\n"); //true
	printf(message2 + 4); //true
	printf("%s", message2 + 4); //true
	printf("%s", &message2[4]); //true

	// set 4
	printf("x = %i\n", x); //true
	printf(format, x); //true

	return 0;
}