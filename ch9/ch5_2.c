/*
	Finding a string into another one.
*/

#include "stdio.h"
#include "stdbool.h"

int lenght(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
		++i;
	return i;
}


void findString(const char source[], const char search[])
{
	int count = lenght(search);
	printf("lenght = %i\n", count);
	// printf("%c\n", search[0]);

	int res[81];
	int i = 0;
	int t = 0;

	while(source[i] != '\0')
	{
		bool equal = true;

		if(source[i] == search[0])
		{
			for(int j = 0; j < count; ++j)
			{
				// printf("i = %i, j = %i, ", i, j );
				if(source[i + j] != search[j])
				{
					equal = false;
					// break;
				}
				// printf("equal = %d\n", equal);
			}
			if(equal == true)
			{
				res[t] = i+1;
				++t;
			}	
		}
		++i;
	}

	res[t] = -1;

	if(res[0] == -1)
		printf("Not found!\n");
	else
	{
		for(int i = 0; i < t; ++i)
			printf("%i\n", res[i]);	
	}
	

}


int main(int argc, char const *argv[])
{
	const char source [] = "do what you want do what you want!";
	const char search [] = "do what you want";

	findString(source, search);

	return 0;
}
