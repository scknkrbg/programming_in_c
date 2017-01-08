/*
	Extending strToInt function to strToFloat.
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

int countIntPart(const char str[])
{
	int i = 0;
	while(str[i] != '.')
		++i;
	return i;
}


double strToFloat(const char str[])
{	
	int num = countString(str);
	printf("Count String = %i\n", num);
	int int_part = countIntPart(str);
	printf("Count int part = %i\n", int_part);
	double result = 0;

	if(str[0] == '-')
	{
		for(int i = 1; str[i] >= '0' && str[i] <= '9'; ++i)
		{
			result += pow(10, int_part - i - 1) * (str[i] - '0');
		}

		for(int i = num - 1; str[i] >= '0' && str[i] <= '9'; --i)
		{
			result += pow(10, int_part - i) * (str[i] - '0');
		}

		return -result;
	}
	else
	{
		for(int i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
		{
			result += pow(10, int_part - i - 1) * (str[i] - '0');
			// printf("%i\n", result);
		}

		for(int i = num - 1; str[i] >= '0' && str[i] <= '9'; --i)
		{
			result += pow(10, int_part - i) * (str[i] - '0');
			// printf("%g\n",pow(10, int_part - i) * (str[i] - '0') );
			// printf("%g\n", result);
		}
		
		return result;
	}

	return -1;
}


int main(int argc, char const *argv[])
{
	const char str[50] = "-245.564";

	// printf("%.2f\n", pow(10, -2) * 8 );
	printf("Number = %g\n", strToFloat(str) );
	return 0;
}