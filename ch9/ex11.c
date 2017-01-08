/*
	Extending strToInt function so that negative numbers could be expressed.
*/

#include "stdio.h"
#include "stdbool.h"
#include "math.h"


int countString(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
		++i;
	return i;
}


int strToInt(const char str[])
{	
	int num = countString(str);
	
	int result = 0;

	if(str[0] == '-')
	{
		for(int i = 1; str[i] >= '0' && str[i] <= '9'; ++i)
		{
			result += pow(10, num - i - 1) * (str[i] - '0');
		}
		return -result;
	}
	else
	{
		for(int i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
		{
			result += pow(10, num - i - 1) * (str[i] - '0');
		}
		return result;
	}

	return -1;
}


int main(int argc, char const *argv[])
{
	const char str[5] = "245";

	printf("Number = %i\n", strToInt(str) );
	return 0;
}