/*
	compareString() function in pointers
*/

#include "stdio.h"


int compareString(char *s1, char *s2)
{
	int answer;
	while(*s1 == *s2 && *s1 && *s2)
	{
		printf("s1 = %c, s2 = %c \n", *s1, *s2);
		++s1;
		++s2;
	}
	

	if(*s1 < *s2)
		answer = -1;
	else if(*s1 > *s2)
		answer = 1;
	else
		answer = 0;
		
	return answer;
}



int main(int argc, char const *argv[])
{
	printf("Comparison = %i\n", compareString("sazkin", "sarabag"));
	return 0;
}