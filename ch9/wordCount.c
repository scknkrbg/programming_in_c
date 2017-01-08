/*
	Counting words
*/

#include "stdio.h"
#include "stdbool.h"

bool alphanumeric(const char c)
{	
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

int countWords(const char str[])
{
	int i = 0; 
	int count = 0;
	bool new_word = true;
	while(str[i] != '\0')
	{
		if(alphanumeric(str[i]))
		{
			if(new_word)
			{
				++count;
				new_word = false;	
			}
		}
		else
			new_word = true;
		printf("%i. %c %i %d\n", i, (char) str[i], count, (bool) new_word);
		++i;
		
	}
	return count;
}


int main(int argc, char const *argv[])
{
	const char s1[] = "olimpiyat mesalesi amazonda";
	const char s2[] = "biz yerliler olarak 0 ozgur bir _kultire sahibiz";

	printf("%s = %i\n", s1, countWords(s1));
	// printf("%s = %i\n", s2, countWords(s2));
	return 0;
}