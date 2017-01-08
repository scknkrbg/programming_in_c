/*
	Response counting without limits.
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int responseCounter[10];
	int i, response;

	for(i = 0; i < 10; ++i)
	{
		responseCounter[i] = 0;
	}

	printf("Enter your responses :\n");

	while(response != 999)
	{
		scanf("%i",&response);
		if(response<1 || response>10)
		{
			printf("Bad number!\n");
		} else ++responseCounter[response-1];
	}

	for(i = 0; i < 10; ++i)
	{
		printf("%-4i=%4i \n", i+1, responseCounter[i]);
	}

	return 0;
}