// Counting words including numbers and punctuation

#include "stdio.h"
#include <stdbool.h>


bool alphabetic(char c)
{	
	bool alpha;
	if ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') || 
		(c >= '0' && c <= '9') ||
		(c >= '!' && c <= '/'))
		alpha = true;
	else
		alpha = false;
	return alpha;
}


int countWords(const char str[])
{
	int i = 0;
	int count = 0;
	bool new_word = true;	
	while(str[i] != '\0')
	{
		if(alphabetic(str[i]))
		{
			if(new_word)
			{	
				++count;
				new_word = false;
			}	

		}
		else
			new_word = true;
		++i;
	}
	return count;
}


int main(int argc, char const *argv[])
{
	const char s1[] = "olimpiyat mesa'lesi -9 yasinda amazonda";
	const char s2[] = "biz yerliler olarak 0 ozgur bir _kultire sahibiz";

	printf("%s = %i\n", s1, countWords(s1));
	// printf("%s = %i\n", s2, countWords(s2));
	return 0;
}

