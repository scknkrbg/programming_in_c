/*
	Find function for searching one in another
*/

#include "stdio.h"

int lenghtOfString(const char str[])
{
	int i = 0;
	do
	{
		++i;
	}
	while(str[i] != '\0');
	return i;
}

int locatePotential(const char source[], const char search[])
{
	char found[81];
	int i = 0;
	int j = 0;

	while(source[i] != '\0')
	{
		if(source[i] == search[0])
		{
			found[j] = i;
			++j;
		}
			
		++i;
	}
	found[j] = '\0';
	return found;
}

int find(const char source[], const char search[])
{
	int count = lenghtOfString(search);
	char found = locatePotential(source, search);
	int res;

	bool equal == true;
	int t = 0;

	for(int i = 0; found[i] != '\0'; ++i)
	{
		for(int j = 0; j < count; ++j)
		{
			if(source[found[i] + j] != search[j])
				equal = false;
				break;
		}
		if(equal == true && search[j+1] == '\0')
		{
			res = i;
			break;
		}

	return res;
}


int main(int argc, char const *argv[])
{
	const char source = "do what you want do want you want!";
	const char search = "do";

	char resultIndex = find(source, search);

	printf("Found on : ");
	for(int i = 0; resultIndex[i] != '\0'; ++i)
		printf("%c ", resultIndex[i]);
	printf("\n");

	return 0;
}



