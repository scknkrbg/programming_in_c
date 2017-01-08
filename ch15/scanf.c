/*
	scanf arguments exercise
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	// int hour, minute, second;
	// scanf("%i:%i:%i", &hour, &minute, &second);
	// printf("%i:%i:%i\n", hour, minute, second);

	// int percentage;
	// scanf("%i%%", &percentage);
	// printf("%i\n", percentage);
	
	// int i; char c;
	// scanf("%i%c", &i, &c);
	// printf("%i %c\n", i, c);

	// int i; 
	// char c[8]; 
	// char s[60];
	// float f;
	// scanf("%i %5c %*f %s", &i, c, s);
	// printf("%i %s %s\n", i, c, s);


	char c[56];
	scanf("%[^\n]\n", c);
	printf("%s\n", c);

	return 0;
}