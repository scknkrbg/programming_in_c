/*
	Concat function
*/

#include "stdio.h"

const char concat (const char s1[], const char s2[], char c)
{
	int i, j;
	char res[99];

	for(i = 0; s1[i] != '\0'; ++i)
		res[i] = s1[i];
	printf("%i\n", i);
	res[i] = c;

	for(j = 1; s2[j] != '\0'; ++j)
		res[i + j] = s2[j];
	printf("%i\n", j);
	res[i + j] = '\0';

	return (const char) res;
}

int main(int argc, char const *argv[])
{
	const char s1[99];
	const char s2[99];
	char res[99];
	printf("Enter the first string : \n");
	scanf("%s", s1);
	printf("Enter the second string :\n");
	scanf("%s", s2);

	// res = concat(s1, s2, ' ');

	printf("Concatenated string : %s\n", concat(s1, s2, '-'));


	return 0;
}