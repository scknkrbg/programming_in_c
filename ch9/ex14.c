/*
	intToStr() function to convert integers to string.
*/

#include "stdio.h"

char result[50];
char result2[50];

void intToStr(int number)
{
	int i;
	for(i = 0; number / 10 != 0; ++i)
	{
		result[i] = (number % 10) + '0';
		number /= 10;
	}
	result[i] = number + '0';

	int j = 0;
	for(i = i ; i >= 0; --i)
	{
		result2[j] = result[i];
		++j;
	}

}


int main(int argc, char const *argv[])
{
	int i = 3493;
	
	intToStr(i);
	
	int j = 0;
	while(result2[j] != '\0')
	{
		printf("%c", result2[j]);
		++j;
	}
	printf("\n");

	return 0;
}