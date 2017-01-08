/*
	Checking string equality
*/

#include "stdio.h"
#include <stdbool.h>

bool stringEquality(const char s1[], const char s2[])
{
	bool equal = true;
	int i = 0;
	while(s2[i] != '\0')
		++i;
	if(s1[i] != s2[i] || s1[i] != '\0')
		equal = false;	
	return equal;
}

int main(int argc, char const *argv[])
{
	const char s1[] = "seckin";
	const char s2[] = "seckin";

	printf("%s == %s : %d\n", s1, s2, stringEquality(s1, s2));


	return 0;
}